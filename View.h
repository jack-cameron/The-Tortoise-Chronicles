#ifndef VIEW_H
#define VIEW_H

#include <iostream>
#include <string>
using namespace std;
/* View class
*
* this is just the generic view class 
* that's been supplied with all of the other assignments.
*
* it takes inout from the user
* and displays the selection menu.			
*/

class View {
  public:
    void showMenu(int&);
    void printStr(string);
    void readInt(int&);
    void readFloat(float&);
    void readStr(string&);
};

#endif
