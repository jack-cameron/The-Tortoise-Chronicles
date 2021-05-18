#ifndef BORC_H
#define BORC_H
#include "Orc.h"
/* Borc class
*
*derived from the orc class.
*
*each borc has an x,y position, a name, 
*and stats for:
*	-health
*	-strength
*	-armour (which is zero, no orcs have armour)				
*/
class Borc : public Orc {

  public:
    Borc(char='b', int=6, int=0, int=5, int=2, int=24);

};
#endif
