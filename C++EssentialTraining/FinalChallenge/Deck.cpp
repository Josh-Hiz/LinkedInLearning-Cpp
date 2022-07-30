//
// Created by Josh Hizgiaev on 7/30/22.
//

#include "Deck.h"
#include <iostream>
#include <vector>
#include <random>
#include <algorithm>



std::vector<std::string> Deck::makeDeck() { //Needs to be shuffled after init

    //Init deck (Every 13 Indexes changes suite)
    completeDeck = {"Ah","2h","3h","4h","5h","6h","7h","8h","9h","Th","Jh","Qh","Kh",
                    "Ac","2c","3c","4c","5c","6c","7c","8c","9c","Tc","Jc","Qc","Kc",
                    "Ad","2d","3d","4d","5d","6d","7d","8d","9d","Td","Jd","Qd","Kd",
                    "As","2s","3s","4s","5s","6s","7s","8s","9s","Ts","Js","Qs","Ks",
    };
    return completeDeck;
}

int Deck::deckSize(int numOfDecks) { //Returns initial size of all deck
    return (numOfDecks * 52);
}

void Deck::shuffleDeck(std::vector<std::string>& Deck) { //Implement multi decks

    std::vector<std::string> newDeck;

    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::shuffle(Deck.begin(), Deck.end(), std::default_random_engine(seed));
    for(const auto & i : Deck){
        newDeck.push_back(i);
    }
}

Deck::Deck(std::vector<std::string>& Deck) {
    Deck = makeDeck() = completeDeck;
    shuffleDeck(Deck);
}


Deck::~Deck() {}

void Deck::deleteElement(std::vector<std::string> Deck, int index) {
   while(index--){
       Deck.erase(Deck.begin(), Deck.begin() + index);
   }
}

void Deck::dealHand(int numOfCards, std::vector<std::string>& currentDeck, int numOfDecks) {
    std::vector<std::string> newHand;
    static int remaining = deckSize(numOfDecks);

    while(numOfCards-- && remaining != 0){
        newHand.push_back(currentDeck[numOfCards]);
        --remaining;
    }
    deleteElement(currentDeck,numOfCards);

    for(auto & i : newHand){
        std::cout << i << " ";
    }
    std::cout << ",there are now " << remaining << " cards remaining" << std::endl;
}





