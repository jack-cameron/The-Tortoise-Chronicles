#ifndef CHARACTER_H
#define CHARACTER_H

/* Character class
*
*abstract class
*
*a character can be a hero, an orc, or a dragon.
*
*each character has an x,y position, a name, 
*and stats for:
*	-health
*	-strength
*	-armour				
*/
class Character {
  public:
    Character(char='c', int=6, int=0, int=5, int=3, int=24);
    virtual void updCharacter(int);
    virtual void collision(char, int);
    char getName();
    int getStrength();
    int getArmour();
    int getHealth();
    int getPositionX();
    int getPositionY();
  protected:
    char name;
    int strength;
    int armour;
    int health;
    int x;
    int y;
};
#endif
