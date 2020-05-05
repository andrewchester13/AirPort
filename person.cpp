#include "person.hpp"
#include "iostream"

using namespace std; 

person::person(int securityLevel, string payload)
{
    this->securityLevel = securityLevel;
    this->payload = payload; 
    this->PersonToGrab = 0; 


}
void person::setNextPerson(person* nextguy)
{
    this->nextPerson = nextguy;
}
person* person::getNextPerson()
{
    return this->nextPerson;
}

int person::getSecuirtyLevel()
{
    return this->securityLevel;
}

string person::getPayload()
{
    return this->payload; 
}
void person::setPersonToGrab(person* suspect)
{
    this->PersonToGrab = suspect; 
}
person* person::getPersonToGrab()
{
    return this->PersonToGrab; 

}
void person::removePersonToGrab()
{
    this->PersonToGrab = 0;  

}
