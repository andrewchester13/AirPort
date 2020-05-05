#include "node.hpp"
#include "door.hpp"
//using namespace std;

int main()
{
    /*
    node* testNode = new node("test");
    node* leftTest = new node("left Test");
    cout << testNode->getLocationName()<< "\n";
    testNode->setPossiblePaths(leftTest, "left");
    cout << "left test: " << testNode->getPossiblePath("left");
*/
    //Every different room that can be in the map
    node* enterence = new node("Airport Enterence");
    node* lobby = new node("Lobby");
    node* coffeeShop = new node("coffee shop");
    node* s1 = new node("security 1");
    node* s2 = new node("security 2");
    node* i1 = new node("interogation 1");
    node* i2 = new node("interogation 2");
    node* t1 = new node("terminal 1");
    node* t2 = new node("terminal 2");
    node* t1g1 = new node("terminal 1: gate 1"); 
    node* t1g2 = new node("terminal 1: gate 2");
    node* t1g3 = new node("terminal 1: gate 3");
    node* t2g1 = new node("terminal 2: gate 1"); 
    node* t2g2 = new node("terminal 2: gate 2");
    node* t2g3 = new node("terminal 2: gate 3");




    //set the paths!!!! 
    enterence->setPossiblePaths(lobby, "up");
    lobby->setPossiblePaths(coffeeShop, "up");
    lobby->setPossiblePaths(s1,"left");
    lobby->setPossiblePaths(s2, "right");
    coffeeShop->setPossiblePaths(lobby, "down");
    s1->setPossiblePaths(lobby, "right");
    s1->setPossiblePaths(i1, "up");
    s2->setPossiblePaths(i2, "up");
    s1->setPossiblePaths(t1, "left");
    s2->setPossiblePaths(lobby, "left");
    s2->setPossiblePaths(t2, "right");
    t1->setPossiblePaths(t1g1, "up");
    t1->setPossiblePaths(t1g2, "left");
    t1->setPossiblePaths(t1g3, "down");
    t2->setPossiblePaths(t2g1, "up");
    t2->setPossiblePaths(t2g2, "left");
    t2->setPossiblePaths(t2g3, "down");
    t1g1->setPossiblePaths(t1, "down");
    t1g2->setPossiblePaths(t1, "right");
    t1g3->setPossiblePaths(t1, "up");
    t2g1->setPossiblePaths(t2, "down");
    t2g2->setPossiblePaths(t2, "left");
    t2g3->setPossiblePaths(t2, "up");
    i1->setPossiblePaths(s1, "down");
    i2->setPossiblePaths(s2, "down");

    //creating the piolt 
    person* piolt = new person(2, "piolt");
    person* bomber = new person(1,"bomber");
    //door creation 
    door* clearance = new door(2);


    //running the game
    cout << "welcome to the airport! Please have no bombs with you!\n";
    cout<<"if you have a bomb... we will kill you faster than COVID takes out old people \n";
    cout<<"you are the piolt! Find the bomber to save everyone\n";
    cout<<"take the bomber to the interogation room as soon as you find him!\n";
    cout << "_______________________________________________________________________________\n";
    lobby->setPeopleInRoom(bomber);
    lobby->playGame(piolt,bomber);
    cout << "_______________________________________________________________________________\n";
    cout<<"thank you for not having bombs... have a good flight!!\n";
    

    




 

}
