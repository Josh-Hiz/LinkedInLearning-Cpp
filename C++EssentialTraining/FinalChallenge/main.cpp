#include <iostream>
#include "Deck.h"
Deck card;

int main() {
    uint8_t num;
    std::cout << "How many decks do you want?" << std::endl;
    std::cin >> num;
    std::vector<std::string> Deck1 = card.makeDeck();
    card.shuffleDeck(Deck1);
    return 0;
}
