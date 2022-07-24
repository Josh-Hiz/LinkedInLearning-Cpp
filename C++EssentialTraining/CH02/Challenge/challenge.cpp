#include <iostream>
#include "Count.h"

//Challenge: Count how many characters in a string
//My way: Count how many LETTERS in a string, AND do a seperate function to count characters


Count c;

int main(){

    int count = 0;

    char str[] = "Helllllllo World";

    c.countLetters(str);

    return 0;
}