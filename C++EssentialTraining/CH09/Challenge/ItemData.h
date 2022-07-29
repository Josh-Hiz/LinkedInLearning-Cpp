//
// Created by Josh Hizgiaev on 7/29/22.
//
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

#ifndef CHALLENGE_ITEMDATA_H
#define CHALLENGE_ITEMDATA_H


class ItemData {
private:
    uint8_t sku;
    std::string productTitle;
    std::string productDescription;
public:
    ItemData(int SKU, std::string& title, std::string& description) : sku(SKU), productTitle(title), productDescription(description) {}
    int getSKU();
    std::string getTitle();
    std::string getDesc();
};


#endif //CHALLENGE_ITEMDATA_H
