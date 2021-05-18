#ifndef DORC_H
#define DORC_H

#include "Orc.h"

/* Dorc class
*
*derived from the orc class.
*
*each dorc has an x,y position, a name, 
*and stats for:
*	-health
*	-strength
*	-armour (which is zero, no orcs have armour)				
*/
class Dorc : public Orc {

  public:
    Dorc(char='d', int=7, int=0, int=5, int=2, int=23);

};
#endif
