//Author: Alex Naron
//Github:https://github.com/MSJC-CSIS-DCHernandez/project-04-anaron91
//November 08, 2020
//CSIS 113A

#include <iostream>
#include "dragon_functions.h"

using std::cout;
using std::endl;

//define functions for dragon

void bite() {
  cout << endl;
  cout << "Dragon bites you!" << '\n';
}

void whip_tail(int damage) {
  cout << endl;
  cout << "Dragon whips tail for " << damage << " damage!" << '\n';
}

void breath_fire(int damage, int time) {
  cout << endl;
  cout << "Dragon breathes fire for " << time << " seconds, you take " << damage << " damage!" << '\n';
}
