#include "LinkedList.hpp"
#include "iostream"

using namespace std;

LinkedList::LinkedList()
{
    this->head = 0;
    this->count = 0; 
}
void LinkedList::addToList(person* newGuy)
{
    if(!this->head)
    {
        this->head = newGuy; 
        this->count ++;
    }
    else
    {
        newGuy->setNextPerson(this->head);
        this->head = newGuy;
    }


}

person* LinkedList::removeFromList(int index)
{
    person* guyToTraverse = this->head;
    person* guyToRemove;
    //if we are at the front of the list 
    //remove the head 

if(!this->head->getNextPerson())
{
    guyToRemove = this->head;
    this->head = 0;
    this->count --;
    return guyToRemove; 
}
else if(index == this->count)
{
    person* firstTraverse = this->head;
    while(firstTraverse->getNextPerson()!= 0)
    {
        firstTraverse = firstTraverse->getNextPerson();
    }
    person* secondTraverse = this->head; 
    while(secondTraverse->getNextPerson()!= firstTraverse)
    {
        secondTraverse = secondTraverse->getNextPerson();
    }
    firstTraverse->setNextPerson(0);
    secondTraverse->setNextPerson(0);
    guyToRemove = firstTraverse;
    delete firstTraverse;
    this->count --; 
    return guyToRemove;
    
}
else
{
    for(int i = index-1; i>0; i--)
    {
        guyToRemove =this->head->getNextPerson();
        guyToTraverse = this->head;
    }
    guyToTraverse->setNextPerson(guyToRemove->getNextPerson());
    delete guyToTraverse->getNextPerson();
    this->count --;
    
    return guyToRemove;
    
}



}
int LinkedList::getCount()
{
    return this->count;
}
person* LinkedList::getAtIndex(int index)
{
    person* guyToTraverse = this->head; 
    if(index == 1)
    {
        return this->head; 

    }
    else
    {
        for(int i = 0; i < index; index++)
        {
            guyToTraverse = guyToTraverse->getNextPerson();
            
        }
        return guyToTraverse; 
    }

}
int LinkedList::findIndex(person* guyToFind)
{
    person* currPerson = this->head; 
    int index = 1;
    for(int i =1; i < this->count; i++)
    {
    if(currPerson->getPayload() == guyToFind->getPayload())
    {
         
        return index;  
    }
    else 
    {
        currPerson = currPerson->getNextPerson();
        index ++;

    }
    }

}