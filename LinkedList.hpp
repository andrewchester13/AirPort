#include "iostream"
#include "person.hpp"

using namespace std; 

class LinkedList
{
    public:
        LinkedList();
        void addToList(person* newGuy);
        person* removeFromList(int index);
        person* getAtIndex(int index);
        int findIndex(person* guyToFind);
        int getCount();



    private:
        person* head; 
        int count; 

         



};