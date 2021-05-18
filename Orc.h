#ifndef ORC_H
#define ORC_H

#include "Character.h"
/* Orc class
*
*derived from the character class.
*
*each orc has an x,y position, a name, 
*and stats for:
*	-health
*	-strength
*	-armour (which is zero because orcs have no armour				
*/
class Orc : public Character {

  public:
    Orc(char='d', int=6, int=0, int=5, int=3, int=24);
    virtual void updCharacter(int);
    virtual void collision(char, int);

};
#endif
