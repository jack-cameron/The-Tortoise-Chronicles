#ifndef DRAGON_H
#define DRAGON_H

#include "Character.h"
/* Dragon class
*
*derived from the charater class.
*
*there is one dragon in the game 
*and it is invincible with max stats.
*
*this class has a bool variable called
*reverse that will dictate whether the 
*dragon moves up or down it's cave.				
*/
class Dragon : public Character {
  
  public:
    Dragon(char='D', int=999, int=999, int=999, int=2, int=24);
    virtual void updCharacter(int);
    virtual void collision(char, int);
  private:
    bool reverse;
};
#endif
