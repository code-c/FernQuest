/* --------------------
 * --- Profile Class ---
 * --------------------
 *  AUTHOR: Codie Cottrell
 * Here is where the game starts. A player creates their name on screen and the player is initialized!
 * A Game Object is made and that's the magic. We interact with the game here. Only things that are
 * needed in the game storyline are stored in this player class.
*/
#include <iostream>
#include <utility>
#include <vector>
//#include <zconf.h> // sleep
#include "Item.h"
#include "Game.h"
#include "Profile.h"
#include <boost/archive/text_oarchive.hpp>
#include <boost/archive/text_iarchive.hpp>

using namespace std;


// overloaded constructor
Profile::Profile(string name) : name(std::move(name)), game(Game()){
    cout << "starting player account: " + this->name << endl;
    game.loadStory();
}

void Profile::openGame() {
    cout << "opening game" << endl;
    exit(0);
}

void Profile::walk() {
    for(int i = 0; i <= 5; i++){
        cout << "..." << endl;
        //sleep(1);
    }
}

Profile::Profile() : game(Game()) {}