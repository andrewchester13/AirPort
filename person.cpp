#include "person.hpp"
#include "iostream"

using namespace std; 

person::person(int securityLevel, string payload)
{
    this->securityLevel = securityLevel;
    this->payload = payload; 

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