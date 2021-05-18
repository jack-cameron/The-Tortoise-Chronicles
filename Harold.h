#ifndef HAROLD_H
#define HAROLD_H

#include "Hero.h"
/* Harold class
*
*derived from the hero class.
*
*there is one harold in each game and he has
*an x,y position, a name, 
*and stats for:
*	-health
*	-strength
*	-armour				
*/
class Harold : public Hero {

  public:
    Harold(char='H', int=5, int=1, int=15, int=3, int=0);

};
#endif
