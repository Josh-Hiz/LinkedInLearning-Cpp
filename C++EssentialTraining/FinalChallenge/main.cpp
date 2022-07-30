#include <iostream>
#include "Deck.h"

static std::vector<std::string> deck; //Make a new string vector
Deck deck1(deck); //Makes new shuffled deck
int num;

int main() {

    std::cout << "How many decks do you want? (The maximum is 4)" << std::endl;
    std::cin >> num;

    if(num > 4){
        printf("Invalid number of decks, 4 is the maximum amount.");
    } else {

        std::cout << num << " decks created for a total amount of " << deck1.deckSize(num) << " cards." << std::endl;
        std::cout << std::endl;

        deck1.dealHand(10, deck,num);
        deck1.dealHand(20, deck,num);
        deck1.dealHand(5, deck,num);
        deck1.dealHand(17, deck, num);

    }
    return 0;
}
