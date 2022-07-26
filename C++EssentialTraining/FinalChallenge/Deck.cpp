//
// Created by Josh Hizgiaev on 7/30/22.
//

#include "Deck.h"
#include <iostream>
#include <vector>
#include <random>
#include <algorithm>

Deck::Deck() {
    makeDeck();
}

void Deck::makeDeck() {
    int suiteLength = sizeof(cardSuites);
    int rankLength = sizeof(cardRanks);
    std::string card;

    for(int i = 0; i < suiteLength; i++){
        for(int j = 0; j < rankLength - 1; j++){
            card += cardRanks[j];
            card += cardSuites[i];
            deck.push_back(card);
            card = ""; //Reset card
        }
    }
}

void Deck::shuffleDecK() {
    std::vector<std::string> newDeck;
    int count = 0;

    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::shuffle(deck.begin(), deck.end(), std::default_random_engine(seed));
    for(const auto& i : deck){
        newDeck.push_back(i);
    }
    for(auto & i : newDeck){
        if(count % 5 == 0) printf("\n");
        std::cout << i << " ";
        count++;
    }
}

int Deck::remainingCards() {
    remaining = (int) deck.size();
    return remaining;
}

int Deck::totalDeckSize() {
    return (int) deck.size();
}

std::string Deck::dealCard() {

    std::vector<std::string>& deck1 = deck;
    std::string nextCard = deck1.back();

    if(remainingCards() == 0){
        perror("\nERROR CANT TAKE ANYMORE\n");
    } else {
        deck1.pop_back();
    }
    return nextCard;

}

void Deck::findCard(int cardIndex) {
    printf("Card: %s\n", deck[cardIndex].c_str());
}

void Deck::deleteDeck() {
    deck.clear();
}

Deck::~Deck() { //Deconstruct deletes all deck elements
    deleteDeck();
}
