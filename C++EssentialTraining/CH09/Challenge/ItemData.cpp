//
// Created by Josh Hizgiaev on 7/29/22.
//

#include "ItemData.h"

std::string ItemData::getTitle() {
    return productTitle;
}

std::string ItemData::getDesc() {
    return productDescription;
}

int ItemData::getSKU() {
    return sku;
}