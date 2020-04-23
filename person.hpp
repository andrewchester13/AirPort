#include<iostream>
#ifndef person_hpp
#define person_hpp


using namespace std; 

class person
{
    public:
        person(int securityLevel, string payload);
        int getSecuirtyLevel();
        string getPayload();
        person* getNextPerson();
        void setNextPerson(person* nextguy);


    private: 
        int securityLevel; 
        string payload;
        person* nextPerson; 
};
#endif