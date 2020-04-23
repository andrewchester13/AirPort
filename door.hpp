#include<iostream>
#include "person.hpp"

using namespace std; 

class door
{
    public:
        door(int secuirityClearance); 
        int getSecurityClearance(person* example);

    private: 
        int securityClearance; 

};