#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>

//Challenge, transform a file
//Objective: Take text from a file items.txt, and basically rewrite it
//1st: Read text file
//2nd: Decode it (basically detect all \t)
//3rd: Keep the data you are looking for in a struct
//4th Print results in terminal using C functions
//Hardest challenge so far and I needed to view the solution in order to fully understand
//what I needed to do

constexpr size_t maxstring = 1024; //Size of line by line buffer
constexpr size_t productTitleSize = 32;
constexpr size_t productDescriptionSize = 128;
constexpr const char* fileName = "items.txt";
constexpr char maxNumberOfTabs = 5;

struct ItemData {
    uint8_t sku;
    char productTitle[productTitleSize];
    char productDescription[productDescriptionSize];
};

size_t* findTabs(const char* buff, size_t bufferLength){
    static size_t indicies[maxNumberOfTabs + 1];
    size_t& count = indicies[0];
    //Zero out the array
    for(auto z : indicies){
        indicies[z] = 0;
    }

    //Go through buffer
    for(size_t i = 0; i < bufferLength; ++i){
        if(buff[i] == '\t'){
            ++count;
            indicies[count] = i;
            if(count >= maxNumberOfTabs){
                break;
            }
        }
    }
    return indicies;
}

int main() {

    char buffer[maxstring]; //We need a buffer to store and read each line in file

    std::cout << "Reading items.txt" << std::endl;
    std::cout << std::endl;

    FILE* fileReader = fopen(fileName, "r");

    if(!fileReader){ //Check if file can be opened
        perror("File failed to be read, check if the file exists or is valid");
        return -1;
    }

    while(fgets(buffer, maxstring, fileReader) != NULL){
        size_t bufferLength = strnlen(buffer, maxstring);

        size_t* splitTabs = findTabs(buffer, bufferLength);
        buffer[splitTabs[1]] = buffer[splitTabs[2]] = 0;

        ItemData data;

        data.sku = atoi(buffer); //Grabs lines
        strncpy(data.productTitle, buffer + splitTabs[1] + 1, productTitleSize);
        strncpy(data.productDescription, buffer + splitTabs[2] + 1, productDescriptionSize);

        printf("sku: %d, name: %s, description: %s\n", data.sku, data.productTitle, data.productDescription);

    }

    return 0;
}
