#include <iostream>
using namespace std;

#include "Orc.h"

Orc::Orc(char c, int s, int a, int h, int x, int y) : Character(c, s, a, h, x, y) {

}

void Orc::updCharacter(int num) {
  if(y == 0) {
    name = ' ';//orcs dissapear when they reach the left-most of the hollow
    y = y;
    return;
  }
  y--;
  if(num < 5) {
    x--;
  }else{
    x++;
  }
  if(x < 0) {
    x = -x;
  }
  if(x > 4) {
    x--;
  }
}

void Orc::collision(char c, int s) {
  if(c == 'H' || c == 'T'){
    health = health - s + armour;
    cout << name << "'s health at: "<< health << endl;
  }else{
    cout << "nothing happened" << endl;//if two orcs collide or collide with a dragon, nothing happens
  }
}
