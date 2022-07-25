//
// Created by Josh Hizgiaev on 7/25/22.
//

#include "LibraryCard.h"

#include <utility>

using namespace std;

void LibraryCard::setTitle(string str) {
    bookTitle = std::move(str);
}

void LibraryCard::setAuthor(string str) {
    bookAuthor = std::move(str);
}

void LibraryCard::setPublisher(string str) {
    bookPublisher = std::move(str);
}

void LibraryCard::setSubject(string str) {
    bookSubject = std::move(str);
}

void LibraryCard::setISBN(string str) {
    ISBN = std::move(str);
}

void LibraryCard::setOCLC(string str) {
    OCLC = std::move(str);
}

void LibraryCard::setDecimal(float decimal) {
    deweyDecimal = decimal;
}

void LibraryCard::setYearPublished(unsigned short number) {
    yearPublished = number;
}

void LibraryCard::setYearAcquired(unsigned short number) {
    yearAcquired = number;
}

void LibraryCard::setBookQuantity(unsigned short number) {
    bookQuantity = number;
}

string LibraryCard::getTitle() {
    return bookTitle;
}

string LibraryCard::getAuthor() {
    return bookAuthor;
}

string LibraryCard::getPublisher() {
    return bookPublisher;
}

string LibraryCard::getSubject() {
    return bookSubject;
}

string LibraryCard::getISBN() {
    return ISBN;
}

float LibraryCard::getDecimal() const {
    return deweyDecimal;
}

unsigned short LibraryCard::getYearPublished() const {
    return yearPublished;
}

unsigned short LibraryCard::getYearAcquired() const {
    return yearAcquired;
}

unsigned short LibraryCard::getBookQuantity() const {
    return bookQuantity;
}

string LibraryCard::getOCLC() {
    return OCLC;
}

void Card::printCard(LibraryCard card) {
    cout << "Book title: " << card.getTitle() << endl;
    cout << "Book author: " << card.getAuthor() << endl;
    cout << "Book subject: " << card.getSubject() << endl;
    cout << "Book publisher: " << card.getPublisher() << endl;
    cout << "ISBN: " << card.getISBN() << endl;
    cout << "OCLC: " << card.getOCLC() << endl;
    cout << "Dewey Decimal: " << card.getDecimal() << endl;
    cout << "Year published: " << card.getYearPublished() << endl;
    cout << "Year acquired: " << card.getYearAcquired() << endl;
    cout << "Book quantity: " << card.getBookQuantity() << endl;
}