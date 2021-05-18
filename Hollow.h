#ifndef HOLLOW_H
#define HOLLOW_H

#include <list>
#include "Array2D.h"
#include "Dorc.h"
#include "Porc.h"
#include "Borc.h"
#include "Dragon.h"
#include "Timothy.h"
#include "Harold.h"

/* Hollow class
*
*this is where all of the game mechanics
*are handlded
*
*init() - initializes a new game
*update(int) - loops through characters and updates their position
*print() - prints out the grid
*add() and del() call are there so list's remove() and push_back() 
*can be accessed outide the class.
*			
*/
class Hollow {
  public:
    Hollow();
    ~Hollow();
    void print();
    void add(Character*);
    void del(Character*);
    void init();
    void update();
    int random(int);
    int condition();
    Character* spawnDorc(int, int);
    Character* spawnBorc(int, int);
    Character* spawnPorc(int, int);
  protected:
    list<Character*> characters;
    Array2D<char> grid;
};
#endif
