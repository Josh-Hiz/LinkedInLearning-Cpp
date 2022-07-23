#include <iostream>
#include <fstream>
#include <string>
#include <iostream>

//Reading text files

std::ifstream inFile;
std::string str;
int number;
char letter;

int main() {

    inFile.open("people.txt");

    if(inFile.fail()){
        std::cout << "Invalid file or no file detected" << std::endl;
    } else {
        while(!inFile.eof()){
            getline(inFile, str);
            std::cout << str << ", ";
            getline(inFile, str);
            number = std::stoi(str);
            std::cout << number << ", ";
            getline(inFile, str);
            letter = str[0];
            std::cout << letter << std::endl;
        }
        inFile.close();
    }
    return 0;
}
