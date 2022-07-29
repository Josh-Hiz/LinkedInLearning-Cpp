#include <cstdio>

int main(){

    fputs("Hello World\n", stdout);

    const int bufferSize = 256;
    static char buff[bufferSize];
    fputs("prompt: ", stdout);
    fgets(buff, bufferSize, stdin);
    puts("Output: ");
    fputs(buff, stdout);
    fflush(stdout); //No code will execute until this is all executed and flushed
    return 0;
}