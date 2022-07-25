#include <iostream>
#include "LibraryCard.h"
//Challenge: Library catalog card
/**
 * Needs:
 * Title (Regular string or cstring)
 * Author (Regular string or cstring)
 * Publisher (Regular string or cstring)
 * Subject (Regular string or cstring)
 * ISBN, OCLC WorldCat, Dewey Decimal
 * Year published (unsigned int8_t)
 * Year acquired (unsigned int8_t)
 * Quantity (unsigned int8_t)
 * @return
 */

LibraryCard setup;
void init(){

    setup.setTitle("Metro 2033");
    setup.setAuthor("Dmitri G");
    setup.setPublisher("Random Book Publishing");
    setup.setSubject("Horror Sci-Fi");
    setup.setISBN("178-995-22-5-22");
    setup.setOCLC("1515151677241");
    setup.setDecimal(519.51);
    setup.setYearPublished(2002);
    setup.setYearAcquired(2015);
    setup.setBookQuantity(10000);
}

int main() {

    init();

    Card::printCard(setup);

    return 0;
}
