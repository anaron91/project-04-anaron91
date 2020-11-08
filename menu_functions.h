//Author: Alex Naron
//Github:https://github.com/MSJC-CSIS-DCHernandez/project-04-anaron91
//November 08, 2020
//CSIS 113A
#ifndef PROJECT_04__MENU_FUNCTIONS_H_
#define PROJECT_04__MENU_FUNCTIONS_H_

//create function for menu

void display_menu();

// create enum for menu options
enum class MenuOption : char {
  Bite = 'a',
  WhipTail,
  BreathFire,
  Quit = 'q',
};

//create menu option

MenuOption to_menu_option(char menu_option);

#endif //PROJECT_04__MENU_FUNCTIONS_H_
