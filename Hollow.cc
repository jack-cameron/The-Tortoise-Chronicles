#include <iostream>
using namespace std;

#include "Hollow.h"

int deathCount;//the hero's death count

Hollow::Hollow() { }

Hollow::~Hollow() {
  for(std::list<Character*>::iterator it=characters.begin(); it != characters.end(); ++it) {
    delete *it;
  }

}
//adds character to the back of stl list using .push_back()
void Hollow::add(Character* c) {
  characters.push_back(c);
}

//removes character using from stl list using .remove()
void Hollow::del(Character* c) {
  characters.remove(c);
  delete c;
}

//prints out the grid
void Hollow::print() {
  cout << grid << endl;
}

//initializes new game
void Hollow::init() {
  deathCount = 0;
  if(!characters.empty()) {//clears list from previous game
    for(std::list<Character*>::iterator it=characters.begin(); it != characters.end(); ++it) {
      delete *it;
    }
    characters.clear();
  }
  for(int i = 0; i<5; ++i) {
    for(int j = 0; j<25; ++j) {
      grid[i][j] = ' ';
    }
  }
  //initialize starting characters...
  Timothy* tim = new Timothy('T', 3, 3, 15, 2, 0);
  Harold* harold = new Harold('H', 5, 1, 15, 3, 0);
  Dragon* d = new Dragon('D', 999, 999, 999, 2, 24);
  characters.push_back(tim);
  characters.push_back(harold);
  characters.push_back(d);
  grid[tim->getPositionX()][tim->getPositionY()] = tim->getName();
  grid[harold->getPositionX()][harold->getPositionY()] = harold->getName();
  grid[d->getPositionX()][d->getPositionY()] = d->getName();
}

void Hollow::update() {
  //loops over the stl list and polymorphically computes the players next position
  for(std::list<Character*>::iterator it=characters.begin(); it != characters.end(); ++it) {
    int x = (*it)->getPositionX(); 
    int y = (*it)->getPositionY(); 
    (*it)->updCharacter(random(10));
    if(grid[(*it)->getPositionX()][(*it)->getPositionY()] != ' ') { //deals with collision
      int x2 = (*it)->getPositionX();
      int y2 = (*it)->getPositionY();
      for(std::list<Character*>::iterator it2=characters.begin(); it2 != characters.end(); ++it2) {
        if((*it2)->getPositionX() == x2 && (*it2)->getPositionY() == y2 && (*it2)->getName() == grid[(*it)->getPositionX()][(*it)->getPositionY()]) {
          cout << "collision: " << (*it2)->getName()<<" "<<(*it)->getName()<<endl;
          (*it)->collision((*it2)->getName(), (*it2)->getStrength());
          (*it2)->collision((*it)->getName(), (*it)->getStrength());
        }
      } 
    }
    if((*it)->getHealth() < 1) { //if a character's health is less than 1, they are dead and must be removed from the list						
      if((*it)->getName() == 'H' || (*it)->getName() == 'T') {
        deathCount++;
        grid[(*it)->getPositionX()][(*it)->getPositionY()] = '+'; //timmy and harold get a grave
        grid[x][y] = ' ';
      }
      del(*it);
      return;
    }
    grid[(*it)->getPositionX()][(*it)->getPositionY()] = (*it)->getName(); 
    grid[x][y] = ' ';     
  }
}

int Hollow::random(int max)
{
	double r = ( (double)rand() / ((double)(RAND_MAX)+(double)(1)) ); 
	return (int)(r * max);
}

//controls main game loop in Control.cc
int Hollow::condition() {
  if(deathCount == 2) { //game ends if both heros die
    cout << "both heros have died...game over!" << endl;
    return 1;
  }
  for(std::list<Character*>::iterator it=characters.begin(); it != characters.end(); ++it) {
    if(((*it)->getName() == 'H' || (*it)->getName() == 'T') && (*it)->getHealth() > 0) {
      if((*it)->getPositionX() == 1 || (*it)->getPositionX() == 2 || (*it)->getPositionX() == 3) {
        if((*it)->getPositionY() == 24) { //game ends if one of the heros reaches the end of the hollow
          ((*it)->getName()== 'T') ? cout << "timmy" : cout << "harold";
          cout << " claims the emerald and wins the game!" << endl;
          return 1;
        }
      }
    }
  }
  return 0;
}

//functions to spawn orcs
Character* Hollow::spawnDorc(int s, int x) {
  Dorc* d = new Dorc('d', s, 0, 5, x, 24); 
  return d;
}

Character* Hollow::spawnBorc(int s, int x) {
  Borc* b = new Borc('b', s, 0, 5, x, 24); 
  return b;
}

Character* Hollow::spawnPorc(int s, int x) {
  Porc* p = new Porc('p', s, 0, 5, x, 24); 
  return p;
}
