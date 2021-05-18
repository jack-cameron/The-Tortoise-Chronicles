#ifndef PORC_H
#define PORC_H

#include "Orc.h"
/* Porc class
*
*derived from the orc class.
*
*each Porc has an x,y position, a name, 
*and stats for:
*	-health
*	-strength
*	-armour (which is zero, no orcs have armour)				
*/
class Porc : public Orc {
  
  public:
    Porc(char='p', int=9, int=0, int=5, int=2, int=24);
};
#endif
