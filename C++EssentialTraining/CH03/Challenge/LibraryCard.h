//
// Created by Josh Hizgiaev on 7/25/22.
//
#include <iostream>
#include <vector>
#ifndef CHALLENGE_LIBRARYCARD_H
#define CHALLENGE_LIBRARYCARD_H

using namespace std;
class LibraryCard {

private:
    string bookTitle;
    string bookAuthor;
    string bookPublisher;
    string bookSubject;
    string ISBN;
    string OCLC;
    float deweyDecimal;
    unsigned short int yearPublished;
    unsigned short int yearAcquired;
    unsigned short int bookQuantity;

public:

    void setTitle(string str);

    void setAuthor(string str);

    void setPublisher(string str);

    void setSubject(string str);

    void setISBN(string str);

    void setOCLC(string str);

    void setDecimal(float decimal);

    void setYearPublished(unsigned short int number);

    void setYearAcquired(unsigned short int number);

    void setBookQuantity(unsigned short int number);

    string getTitle();

    string getAuthor();

    string getPublisher();

    string getSubject();

    string getISBN();

    string getOCLC();

    [[nodiscard]] float getDecimal() const;

    [[nodiscard]] unsigned short int getYearPublished() const;

    [[nodiscard]] unsigned short int getYearAcquired() const;

    [[nodiscard]] unsigned short int getBookQuantity() const;

};

struct Card{
    static void printCard(LibraryCard card);
};

#endif //CHALLENGE_LIBRARYCARD_H
