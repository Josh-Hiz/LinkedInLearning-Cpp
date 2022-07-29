#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "ItemData.h"

constexpr size_t maxString = 1024;
constexpr const char* fileName = "/Users/jhiz2704/C++Projects/C++LinkedInProjects/C++EssentialTraining/CH09/Challenge/cmake-build-debug/items.txt";
constexpr char tabChar = '\t';



std::vector<std::string> findTabs(const std::string& s){
    std::vector<std::string> str;
    size_t startLocation = 0;
    size_t separationPoint = 0;
    while(true){
        separationPoint = s.find(tabChar, startLocation); //Stores tab char index at start location
        str.push_back(s.substr(startLocation, separationPoint - startLocation));
        if(separationPoint == std::string::npos) break;
        startLocation = separationPoint + 1;
    }
    return str;
}


int main() {

    char buffer[maxString];

    std::ifstream inFile(fileName);

    if(inFile.fail()){
        std::cout << "ERROR" << std::endl;
    } else {
        while(!inFile.eof()){

            try{

                inFile.getline(buffer, sizeof(buffer));
                std::vector<std::string> string = findTabs(buffer);

                ItemData data(std::stoi(string[0]),string[1],string[2]);
                std::cout << "sku: " << data.getSKU() << " name: " << data.getTitle() << " desc: " << data.getDesc() << std::endl;

            } catch(std::exception& e){
                std::cout << "Small error found" << std::endl;
            }
        }
        inFile.close();
    }

    return 0;
}
