#ifndef CONTROL_H
#define CONTROL_H

#include <iostream>
#include <string>
#include <list>

#include "Hollow.h"
#include "View.h"
/* Control class
*
* calls the Hollow object's functions
* that control the flow of the game.
*
* contains the main game loop. 			
*/
using namespace std;


class Control
{
  public:
    void launch();
    int random(int);
  private:
    Hollow hollow;
    View view;
};

#endif
