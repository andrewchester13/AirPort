#include "node.hpp"
#include "iostream"

using namespace std; 

node::node(string locationName)
{
    this->locationName = locationName;
    this->left = 0;
    this->right = 0;
    this->up = 0;
    this->down = 0;
    this->peopleInRoom = new LinkedList();
}
void node::setPeopleInRoom(person* stranger)
{
    this->peopleInRoom->addToList(stranger);
}
void node::removePeopleFromRoom(person* person)
{
    int index = this->peopleInRoom->findIndex(person);
    this->peopleInRoom->removeFromList(index);

}
void node::GetPeopleInroom()
{
    if(this->peopleInRoom->getCount() ==  0)
    {
        cout<<"there are no people in the room\n";
    }
    else
    {
        cout <<"Warning: there are others here with you... they may have a bomb\n";
    
    }
    
}
void node::playGame(person* mainChar)
{
    //Just have to enable to play game!!!!
    cout <<"you are currently at: " + this->locationName << "\n";
    
    this->peopleInRoom->addToList(mainChar);
    this->GetPeopleInroom();
    if(this->up)
    {
        cout <<"would you like to go up and go to: " + this->up->locationName << "?\n";
        cout<< "type 'yes' or 'no'\n";
        cout<<"if you would like to quit press 'Q'\n";
        string decision;
        cin >> decision;
        if(decision == "yes")
        {
            this->up->playGame(mainChar);
        }
        if(decision == "Q")
        {
            return;
        }

    }
    if(this->down)
    {
        cout <<"would you like to go down and go to: " + this->down->locationName << "?\n";
        cout<< "type 'yes' or 'no'\n";
        cout<<"if you would like to quit press 'Q'\n";
        string decision;
        cin >> decision;
        if(decision == "yes")
        {
            this->down->playGame(mainChar);
        }
        if(decision == "Q")
        {
            return;
        }

    }
    if(this->left)
    {
        cout <<"would you like to go left and go to: " + this->left->locationName << "?\n";
        cout<< "type 'yes' or 'no'\n";
        cout<<"if you would like to quit press 'Q'\n";
        string decision;
        cin >> decision;
        if(decision == "yes")
        {
            this->left->playGame(mainChar);
        }
        if(decision == "Q")
        {
            return;
        }

    }
    if(this->right)
    {
        cout <<"would you like to go right and go to: " + this->right->locationName << "?\n";
        cout<< "type 'yes' or 'no'\n";
        cout<<"if you would like to quit press 'Q'\n";
        string decision;
        cin >> decision;
        if(decision == "yes")
        {
            this->right->playGame(mainChar);
        }
        if(decision == "Q")
        {
            return;
        }
    }
}

string node::getLocationName()
{
    return this->locationName; 
}

string node::getPossiblePath(string direction)
{
    if(direction == "up")
    {
        return this->up->getLocationName(); 
    }
    if(direction == "down")
    {
        return this->down->getLocationName(); 
    }
    if(direction == "left")
    {
        return this->left->getLocationName(); 
    }
    if(direction == "right")
    {
        return this->right->getLocationName(); 
    }
}

void node::setPossiblePaths(node* n, string direction)
{
    if(direction == "up")
    {
        this-> up = n;  
    }
    if(direction == "down")
    {
        this->down = n; 
    }
    if(direction == "left")
    {
        this ->left = n; 
    }
    if(direction == "right")
    {
        this->right = n; 
    }
}



