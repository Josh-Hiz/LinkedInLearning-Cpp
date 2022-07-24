//
// Created by Josh Hizgiaev on 7/23/22.
//

#include <stdio.h>
#include "Count.h"

void Count::countChars(char str[]) {
    int count = 0;
    for(char* p = str; *p != 0; p++){
        count++;
    }
    std::cout << "Char count: " << count << std::endl;

}

void Count::countLetters(char str[]) {
    int count = 0;
    for(char* p = str; *p != 0; p++){
        if(*p == ' '){
            continue;
        } else {
            count++;
        }
    }
    std::cout << "Letter count: " << count << std::endl;
}
