#ifndef HERO_H
#define HERO_H

#include "Character.h"
/*Hero class
*
*derived from the character class.
*
*each hero has an x,y position, a name, 
*and stats for:
*	-health
*	-strength
*	-armour	
*
*there are two heros in this game;
*harold and timmy.			
*/
class Hero : public Character {

  public:
    Hero(char='h', int=6, int=0, int=5, int=3, int=24);
    virtual void updCharacter(int);
    virtual void collision(char, int);
};
#endif
