#include <iostream>
#include "LinkedList.hpp"

using namespace std;

class node
{
    public:
        node(string locationName);
        string getLocationName();
        string getPossiblePath(string direction);
        void setPossiblePaths(node* n, string direction);
        void playGame(person* mainChar);
        void GetPeopleInroom();
        void setPeopleInRoom(person* stanger);
        void removePeopleFromRoom(person* person);
        

    private:
        string locationName;
        node* up;
        node* down;
        node* left; 
        node* right;
        LinkedList* peopleInRoom; 
        
         


    


};
