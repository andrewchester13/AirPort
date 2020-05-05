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
        cout<<"If you would like to pick them up press 'P'\n";
    }
    
}
void node::playGame(person* mainChar, person* bomber)
{
    //Just have to enable to play game!!!!
    cout <<"you are currently at: " + this->locationName << "\n";
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
            this->up->playGame(mainChar, bomber);
        }
        if(decision == "Q")
        {
            return;
        }
        if(decision == "P")
        {

            
            mainChar->setPersonToGrab(bomber);
            this->removePeopleFromRoom(bomber);
            cout<<"You have grabbed the bomber\n";
            cout<<" ";
            this->playGame(mainChar, bomber);
            
        }
        else if(decision == "D")
        {
            this->setPeopleInRoom(mainChar->getPersonToGrab());
            mainChar->removePersonToGrab();
            cout<< "You have dropped the bomber off at: "<< this->locationName<< "\n";
            if(this->locationName == "interogation 1" || this->locationName == "interogation 2")
            {
                cout<< "You won! You saved everyone! \n";
                return;
            }
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
            this->down->playGame(mainChar, bomber);
        }
        if(decision == "Q")
        {
            return;
        }
        if(decision == "P")
        {

            
            mainChar->setPersonToGrab(bomber);
            this->removePeopleFromRoom(bomber);
            cout<<"You have grabbed the bomber\n";
            cout<<" ";
            this->playGame(mainChar, bomber);
            
        }
       else if(decision == "D")
        {
            this->setPeopleInRoom(mainChar->getPersonToGrab());
            mainChar->removePersonToGrab();
            cout<< "You have dropped the bomber off at: "<< this->getLocationName()<< "\n";
            if(this->locationName == "interogation 1" || this->locationName == "interogation 2")
            {
                cout<< "You won! You saved everyone! \n";
                return;
            }
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
            this->left->playGame(mainChar, bomber);
        }
        if(decision == "Q")
        {
            return;
        }
        if(decision == "P")
        {

            
            mainChar->setPersonToGrab(bomber);
            this->removePeopleFromRoom(bomber);
            cout<<"You have grabbed the bomber\n";
            cout<<" ";
            this->playGame(mainChar, bomber);
            
        }
       else if(decision == "D")
        {
            this->setPeopleInRoom(mainChar->getPersonToGrab());
            mainChar->removePersonToGrab();
            cout<< "You have dropped the bomber off at: "<< this->getLocationName()<< "\n";
            if(this->locationName == "interogation 1" || this->locationName == "interogation 2")
            {
                cout<< "You won! You saved everyone! \n";
                return;
            }
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
            this->right->playGame(mainChar, bomber);
        }
        if(decision == "Q")
        {
            return;
        }
        if(decision == "P")
        {

            
            mainChar->setPersonToGrab(bomber);
            this->removePeopleFromRoom(bomber);
            cout<<"You have grabbed the bomber\n";
            cout<<" ";
            this->playGame(mainChar, bomber);
            
        }
       else if(decision == "D")
        {
            this->setPeopleInRoom(mainChar->getPersonToGrab());
            mainChar->removePersonToGrab();
            cout<< "You have dropped the bomber off at: "<< this->getLocationName()<< "\n";
            if(this->locationName == "interogation 1" || this->locationName == "interogation 2")
            {
                cout<< "You won! You saved everyone! \n";
                return;
            }
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



