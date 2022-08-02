//
// Created by Josh Hizgiaev on 7/30/22.
//

#ifndef FINALCHALLENGE_DECK_H
#define FINALCHALLENGE_DECK_H

#include <iostream>
#include <vector>
#include <cstdio>

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

 class Deck {

 private:
     char cardSuites[4] = {'d','h','s','c'}; //Diamonds Hearts Spades Clubs
     char cardRanks[14] = {'A','2','3','4','5','6','7','8','9','T','K','Q','J'}; //Ace 2 3 4 5 6 7 8 9 King Queen Jack I forgot what T is
     std::vector<std::string> deck;
     int remaining;
     void deleteDeck();
 public:

     Deck(); //Default constructor, assigns 52 cards to deck
     void shuffleDecK();
     void findCard(int cardIndex);
     std::string dealCard();
     void makeDeck();
     int remainingCards();
     int totalDeckSize();
     ~Deck();
};


#endif //FINALCHALLENGE_DECK_H
