#include <iostream>
#include "Deck.h"
#include <vector>

static void dealHand(Deck& deck1, int numOfCards){
    std::vector<std::string> newHand;

    while(numOfCards--){
        newHand.push_back(deck1.dealCard());
    }
    std::cout << std::endl;
    for(int i = 0; i < newHand.size(); i++){
        std::cout << newHand[i] << ", ";
    }
    std::cout << "Cards remaining: " << deck1.remainingCards() << std::endl;

}

int main() {

    Deck deck;

    std::string response;
    int numberOfHands;
    int numberOfCards;
    int cardIndex;
    std::cout << "Welcome! Do you wish to use the playing card system?" << std::endl;
    std::cin >> response;
    if(response == "no"){
        std::cout << "So why are you using this? Anyways, thanks for trying" << std::endl;
    } else if(response == "yes") {

        std::cout << "Shuffling deck..." << std::endl;
        std::cout << "This is your current deck with a size of " << deck.totalDeckSize() << " cards:" << std::endl;

        deck.shuffleDecK();

        printf("\nDo you want to see a specific card in your deck? If so you cannot go back after selecting yes\n");
        std::cin >> response;
        if(response == "no"){
            printf("\nHow many hands do you want to draw? A maximum of 4 is allowed\n");

            std::cin >> numberOfHands;

            switch(numberOfHands){
                case 1:
                    printf("How many cards?\n");
                    std::cin >> numberOfCards;
                    dealHand(deck, numberOfCards);
                    break;
                case 2:
                    printf("How many cards for the first draw?\n");
                    std::cin >> numberOfCards;
                    dealHand(deck, numberOfCards);
                    printf("How many cards for the second draw?\n");
                    std::cin >> numberOfCards;
                    dealHand(deck, numberOfCards);
                    break;
                case 3:
                    printf("How many cards for the first draw?\n");
                    std::cin >> numberOfCards;
                    dealHand(deck, numberOfCards);
                    printf("How many cards for the second draw?\n");
                    std::cin >> numberOfCards;
                    dealHand(deck, numberOfCards);
                    printf("How many cards for the third draw?\n");
                    std::cin >> numberOfCards;
                    dealHand(deck, numberOfCards);
                    break;
                case 4:
                    printf("How many cards for the first draw?\n");
                    std::cin >> numberOfCards;
                    dealHand(deck, numberOfCards);
                    printf("How many cards for the second draw?\n");
                    std::cin >> numberOfCards;
                    dealHand(deck, numberOfCards);
                    printf("How many cards for the third draw?\n");
                    std::cin >> numberOfCards;
                    dealHand(deck, numberOfCards);
                    printf("How many cards for the fourth draw?\n");
                    std::cin >> numberOfCards;
                    dealHand(deck, numberOfCards);
                    break;
                default:
                    printf("Invalid number of hands\n");
                    break;
            }
        } else {
            while(true){
                printf("What card do you want to see? Type the numbers 0-51 to see the 1st-52nd cards\n");
                std::cin >> cardIndex;
                deck.findCard(cardIndex);
                printf("Do you want to see another card? Types yes or no\n");
                std::cin >> response;
                if(response == "no") break;
            }
        }
        printf("Thank you for trying out this deck system!");
    } else {
        printf("Invalid input");
    }

    return 0;
}
