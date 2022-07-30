//
// Created by Josh Hizgiaev on 7/30/22.
//

#ifndef FINALCHALLENGE_DECK_H
#define FINALCHALLENGE_DECK_H

#include <iostream>
#include <vector>

//Cards hold 2 things: Identifier, and Suite, however this can be easily initialized and then shuffled so no need to actually declare them, right?
//Cards are held in a container/vector called Deck

//Make a function to init a deck going in order -Done
//Make a function to shuffle deck randomly everytime a new deck is created - Must add multi deck functionality
//Make decksize function - done
//Make remaining cards function - IP
//Make constructor and destructor, the construct must: - IP
/**
 * init an n number of decks based on user input
 * shuffle each new deck made
 * display total amount of cards after all decks generated (Max should be 208 cards)
 * Destructor delete must every single deck
 */
 //Make dealHand function, this will grab the first n cards of the vector (use remove method) - IP
 //Make remaining cards funciton - IP (must implement deal cards function first)

 class Deck {
    std::vector<std::string> completeDeck;
//    std::string cardType;
public:
    std::vector<std::string> makeDeck(); //Inits new deck
    static void shuffleDeck(std::vector<std::string>& Deck);
    void dealHand(int numOfCards, std::vector<std::string>& currentDeck, int numOfDecks); //Reduces count of cards in deck by 1 everytime this is called
    static int deckSize(int numOfDecks);
    Deck(std::vector<std::string>& Deck);
    static void deleteElement(std::vector<std::string> Deck, int index);
    ~Deck();
};


#endif //FINALCHALLENGE_DECK_H
