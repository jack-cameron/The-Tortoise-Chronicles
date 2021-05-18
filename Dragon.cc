#include <iostream>
using namespace std;

#include "Dragon.h"

Dragon::Dragon(char c, int s, int a, int h, int x, int y) : Character(c, s, a, h, x, y) {
  reverse = false;
}

void Dragon::updCharacter(int num) {
  if(x ==1) {
    reverse = false;
  }
  if(x == 3) {
    reverse = true;
  }
  if(reverse){
    x--;
  }else{
    x++;
  }
}

void Dragon::collision(char c, int s){ 
  strength = strength; //dragon is invincible so stats don't go down
  armour = armour;	
  health = health;	
}
