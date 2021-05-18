#include <iostream>
using namespace std;
#include <string>
#include <list>
#include <cstdlib>
#include <unistd.h>
#include "Control.h"

void Control::launch() {
  int    choice;
  while (1) {
    view.showMenu(choice);
    if (choice == 0){
      break;
    }
    if (choice == 1) {
      hollow.init();//initializes characters
      // main game loop
      while(hollow.condition() == 0) {
        sleep(1);
        hollow.update();
        hollow.print();
        //during each itertion, an orc has a 60% chance or spawning
        int num = random(10);
        if(num < 6) {
          if(num < 2){
            hollow.add(hollow.spawnDorc(6 + random(2), random(5)));
          }else if(num<4) {
            hollow.add(hollow.spawnBorc(8 + random(3), random(5)));
          }else{
            hollow.add(hollow.spawnPorc(4 + random(1), random(5)));
          }
        }   
      }
    }
  }
}

int Control::random(int max) {
	double r = ( (double)rand() / ((double)(RAND_MAX)+(double)(1)) ); 
	return (int)(r * max);
}



