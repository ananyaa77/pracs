
#include "Person.h"

PersonList shallowCopyPersonList(PersonList pl) {
    PersonList copiedList;
    copiedList.numPeople = pl.numPeople;
    copiedList.people = pl.people; // Point to the same array
    
    return copiedList;
}