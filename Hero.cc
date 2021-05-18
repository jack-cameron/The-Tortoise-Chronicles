#include <iostream>
using namespace std;

#include "Hero.h"

Hero::Hero(char c, int s, int a, int h, int x, int y) : Character(c, s, a, h, x, y) {

}

void Hero::updCharacter(int num) {
  y++;
  if(y>24) {
    y--;
  }
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

void Hero::collision(char c, int s) {
  if(c == 'H' || c == 'T'){ //if harold collides with timmy or vice versa, nothing will happen
    cout << "nothing happened" <<endl;
    return;
  }
  health = health - s + armour;//hero takes damage
  cout << name << "'s healtn at: "<< health << endl;
}
