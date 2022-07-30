//
// Created by Josh Hizgiaev on 7/30/22.
//

#ifndef FINALCHALLENGE_DECK_H
#define FINALCHALLENGE_DECK_H

#include <iostream>
#include <vector>

//Cards hold 2 things: Identifier, and Suite
//Cards are held in a container/vector called Deck
class Deck {
    std::vector<std::string> completeDeck;
    uint8_t remaining;

public:
    std::vector<std::string> makeDeck(); //Inits new deck
    void shuffleDeck( std::vector<std::string>& Deck);
    const Deck& dealCard(); //Reduces count of cards in deck by 1 everytime this is called
    int8_t remainingCards();
    int8_t deckSize();
};


#endif //FINALCHALLENGE_DECK_H
