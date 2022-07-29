#include <cstdio>
#include <cstring>
#include <cstdint>
#include <iostream>

//C implementation of Binary files

constexpr size_t maxLength = 127;

//(Can also be class)
struct s1 {
    uint8_t number;
    uint8_t length;
    char s[maxLength + 1]; //128
};

int main(){

    const char* fn = "text.file";
    const char* str = "This is a literal C-String";

    //Create/Write the test.file.txt file
    std::cout << "Writing file" << std::endl;
    FILE* fw = fopen(fn,"wb");

    static s1 buff1; //Static so buffer2 can carry on the values
    for(int i = 0; i < 5; i++){

        buff1.number = i;
        buff1.length = (uint8_t) strlen(str); //Makes length to write the length of C string

        if(buff1.length > maxLength){
            buff1.length = maxLength; //This is just done if the string is too long
        }

        strncpy(buff1.s, str, maxLength); //Copy string into buffer

        buff1.s[buff1.length] = 0; //Make sure it has terminated at 0

        fwrite(&buff1, sizeof(s1),1,fw); //Write to file
    }
    fclose(fw);
    std::cout << "Creating and writing is over" << std::endl;

    std::cout << std::endl;

    //Read the file
    std::cout << "Reading the file" << std::endl;

    FILE* fr = fopen(fn, "rb");

    static s1 buff2;

    size_t rc;

    while((rc = fread(&buff2, sizeof(s1),1,fr))){
        printf("a: %d, b: %d, s: %s\n",buff2.number, buff2.length, buff2.s);
    }

    fclose(fr);
    remove(fn);
    std::cout << "Reading is over";

    return 0;
}