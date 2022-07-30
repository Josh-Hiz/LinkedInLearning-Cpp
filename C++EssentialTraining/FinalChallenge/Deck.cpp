//
// Created by Josh Hizgiaev on 7/30/22.
//

#include "Deck.h"
#include <iostream>
#include <vector>
#include <random>
#include <string>
#include <cmath>
#include <algorithm>
#include <random>


std::vector<std::string> Deck::makeDeck() { //Needs to be shuffled after init

    //Init deck (Every 13 Indexes changes suite)
    completeDeck = {"Ah","2h","3h","4h","5h","6h","7h","8h","9h","Th","Jh","Qh","Kh",
                    "Ac","2c","3c","4c","5c","6c","7c","8c","9c","Tc","Jc","Qc","Kc",
                    "Ad","2d","3d","4d","5d","6d","7d","8d","9d","Td","Jd","Qd","Kd",
                    "As","2s","3s","4s","5s","6s","7s","8s","9s","Ts","Js","Qs","Ks",
    };

    return completeDeck;

}

int8_t Deck::deckSize() { //Returns initial size of deck
    return completeDeck.size();
}

void Deck::shuffleDeck(std::vector<std::string>& Deck) {

    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::shuffle(Deck.begin(), Deck.end(), std::default_random_engine(seed));

   for(int i = 0; i < Deck.size() - 1; i++){
       std::cout << Deck[i] << ", ";
   }
}
