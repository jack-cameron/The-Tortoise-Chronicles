COMP2404 Final Assignment
Jack Cameron - 101111927

Files included:

Array2D.h
Borc.cc
Borc.h
Character.cc
Character.h
Control.cc
Control.h
Dorc.cc
Dorc.h
Dragon.cc
Dragon.h
Harold.cc
Harold.h
Hero.cc
Hero.h
Hollow.cc
Hollow.h
main.cc
Makefile
Orc.cc
Orc.h
Porc.cc
Porc.h
README.txt (this file)
Timothy.cc
Timothy.h
View.cc
View.h

Instructions for testing:

to compile - 
make or make final

to clean - 
make clean

to run - 
./final

to check for leaks -
valgrind ./final

note for testing - 
1 - to play
0 - to exit

About the program:

This is a c++ program that simulates the couragous, and hard-fought battles that Timmy Tortoise and Harold the Hare encounter on their way to rescue the emerald.

Timmy and Harold may both die on this quest...but that's okay!
Just restart the game and a new Timmy and Harold will respawn with a fresh hollow, and a second attempt at snagging the emerald. (Watch out for the dragon though.)

Timmy and Harold traverse through the dangerous Dragon's Hollow, which is represented by a 2D-Array. 

Our heros must fight through the hordes of orcs that spawn and also bypass the dragon that paces up and down the cave where the emerald is stored.

All characters in this quest are stored in a stl list that gets looped through during each iteration of the game. 
At each loop, a function called updCharacter() is called that polymorphically computes the characters next position.

The game ends when either both of our heros parish, or one of them reaches the emerald.

