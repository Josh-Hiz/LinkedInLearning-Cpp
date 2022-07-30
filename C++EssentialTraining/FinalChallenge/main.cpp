#include <iostream>
#include "Deck.h"
Deck card;

int main() {
    std::vector<std::string> Deck = card.makeDeck();
    card.shuffleDeck(Deck);

    std::cout << std::endl;
    std::vector<std::string> Deck1 = card.makeDeck();
    card.shuffleDeck(Deck1);
    return 0;
}
