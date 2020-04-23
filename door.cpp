#include "door.hpp"
#include "iostream"


using namespace std; 

door::door(int securityClearance)
{
    this->securityClearance = securityClearance;

}

int door::getSecurityClearance(person* example)
{

int answer = this->securityClearance - example->getSecuirtyLevel(); 


}