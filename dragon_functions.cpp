//Author: Alex Naron
//Github:https://github.com/MSJC-CSIS-DCHernandez/project-04-anaron91
//November 08, 2020
//CSIS 113A

#include "dragon_functions.h"

#include "dragon_functions.h"
#include <iostream>
#include <string>

using std::cout;
using std::endl;

//define functions for dragon

void bite() {
  cout << "Dragon bites you!" << "\n\n";
}

void whip_tail(int damage) {
  cout << "Dragon whips tail for " << damage << " damage!" << "\n\n";
}

void breath_fire(int damage, int time) {
  cout << "Dragon breathes fire for " << time << " seconds, you take " << damage << " damage!" << "\n\n";
}