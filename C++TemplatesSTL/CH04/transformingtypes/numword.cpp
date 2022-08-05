// numword.cpp by Bill Weinman <http://bw.org/>
// version as of 2019-09-27
#include "numword.h"
using namespace bw;

// destructor
numword::~numword() {
    clearbuf();
}

// assignment operator
numnum numword::operator = ( const numnum num ) { //Not sure if this is actually used?
    setnum(num);
    return getnum();
}

const char * numword::words() { //Arbitrary, isn't actually used
    return words(_num);
}


// -- private methods --

// reset the buffer
void numword::clearbuf() { //Only used in destructor and to make sure buffer is clear when initBuf
    if (_buf != nullptr) {
        free(_buf);
        _buf = nullptr;
    }
    _buflen = 0;
}

// initialize the buffer
void numword::initbuf() {
    clearbuf();
    _buf = (char *) malloc(_maxstr); //Allocate memory of size maxstr
    *_buf = 0;
    hyphen_flag = false;
}

// append space (or hyphen)
void numword::appendspace() {
    if (_buflen) {
        appendbuf( hyphen_flag ? _hyphen : _space);
        hyphen_flag = false;
    }
}

// append text to the string buffer
void numword::appendbuf(const char * s) {
    if(!s) return;
    size_t slen = strnlen(s, _maxstr);
    if (slen < 1) {
        return;
    }
    if ((slen + _buflen + 1) >= _maxstr) {
        return;
    }
    memcpy(_buf + _buflen, s, slen);
    _buflen += slen;
    _buf[_buflen] = 0;
}


// convert to words
const char * numword::words( const numnum num ) {
    if (num > _maxnum) {
        return errnum; //Return error case
    }
    initbuf();
    numnum n = num;
    if (n == 0) {
        appendbuf(_singles[n]);
        return _buf;
    }
    
    // powers of 1000
    if (n >= 1000) {
        for(int i = 5; i > 0; --i) {
            numnum power = (numnum) pow(1000.0, i);
            numnum _n = ( n - ( n % power ) ) / power;
            if (_n) {
                int index = i;
                numword _nw(_n);
                appendspace();
                appendbuf(_nw.words());
                appendspace();
                appendbuf(_powers[index]);
                n -= _n * power;
            }
        }
    }
    // hundreds
    if (n >= 100 && n < 1000) {
        numnum _n = ( n - ( n % 100 ) ) / 100;
        numword _nw(_n);
        appendspace();
        appendbuf(_nw.words());
        appendspace();
        appendbuf(_hundred);
        n -= _n * 100;
    }
    // tens
    if (n >= 20 && n < 100) {
        numnum _n = ( n - ( n % 10 ) ) / 10;
        appendspace();
        appendbuf(_tens[_n]);
        n -= _n * 10;
        hyphen_flag = true;
    }
    // teens
    if (n >= 10 && n < 20) {
        appendspace();
        appendbuf(_teens[n - 10]);
        n = 0;
    }
    // singles
    if (n > 0 && n < 10) {
        appendspace();
        appendbuf(_singles[n]);
    }
    return _buf;
}
