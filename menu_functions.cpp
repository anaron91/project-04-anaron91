//Author: Alex Naron
//Github:https://github.com/MSJC-CSIS-DCHernandez/project-04-anaron91
//November 08, 2020
//CSIS 113A

#include <iostream>
#include "menu_functions.h"

using std::cout;
using std::endl;

//define functions

void display_menu() {
  cout << "a) bite " << endl;
  cout << "b) whip tail " << endl;
  cout << "c) breath fire " << endl;
  cout << "q) quit " << endl;
}

//define menu option

MenuOption to_menu_option(char menu_option) {
  return static_cast<MenuOption>(menu_option);
}