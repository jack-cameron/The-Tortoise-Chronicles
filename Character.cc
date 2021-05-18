#include <iostream>
using namespace std;

#include "Character.h"

Character::Character(char c, int s, int a, int h, int posX, int posY) {
  name = c;
  strength = s;
  armour = a;
  health = h;
  x = posX;
  y = posY;
}

//getters
char Character::getName() { return name; }

int Character::getStrength() { return strength; }

int Character::getArmour() { return armour; }

int Character::getHealth() { return health; }

int Character::getPositionX() { return x; }

int Character::getPositionY() { return y; }

//pure virtual void functions that will be implemented in the derived classes
void Character::updCharacter(int num) {  }

void Character::collision(char c, int s) { }
