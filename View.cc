#include <iostream>
using namespace std;
#include <string>

#include "View.h"

void View::showMenu(int& choice) {
  cout << "Welcome to: The Tortoise Chronicles: Journey to Dragon’s Hollow!" << endl;
  cout << endl;
  cout << "Select an option:"<< endl;
  cout << "  (1) Play " << endl;
  cout << "  (0) Exit" << endl<<endl;

  cout << "Enter your selection: ";
  cin >> choice;
  if (choice == 0){
    cout << "Thanks for playing!" << endl;
    return;
  }
  while (choice < 1 || choice > 1) {
    cout << "Enter your selection: ";
    cin >> choice;
  }

}

void View::printStr(string str)
{
  cout << str;
}

void View::readInt(int& n)
{
  cin >> n;
}

void View::readFloat(float& f)
{
  cin >> f;
}

void View::readStr(string& str)
{
  cin >> str;
}
