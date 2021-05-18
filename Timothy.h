#ifndef TIMOTHY_H
#define TIMOTHY_H

#include "Hero.h"
/* Timothy class
*
*derived from the hero class.
*
*there is one timmy in each game and he has
*an x,y position, a name, 
*and stats for:
*	-health
*	-strength
*	-armour				
*/
class Timothy : public Hero {

  public:
    Timothy(char='T', int=3, int=3, int=15, int=2, int=0);

};
#endif
