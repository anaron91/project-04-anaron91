//Author: Alex Naron
//Github:https://github.com/MSJC-CSIS-DCHernandez/project-04-anaron91
//November 08, 2020
//CSIS 113A

#include <iostream>
#include <string>
#include <random>
#include "dragon_functions.h"
#include "menu_functions.h"

using std::cout;
using std::endl;

int main() {

  //declare constants for ranges of rng's
  const int kMinDamage = 1;
  const int kMaxDamage = 200;
  const int kMinSeconds = 1;
  const int kMaxSeconds = 20;

//create and initialize rng's for damage and seconds
  std::mt19937 rng(std::random_device{}());
  std::uniform_int_distribution<int> damage_range(kMinDamage, kMaxDamage);
  std::uniform_int_distribution<int> seconds_range(kMinSeconds, kMaxSeconds);

  //create bool for run program
  bool program_is_running = true;

// initialize main loop
  while (program_is_running) {
    // display main menu
    display_menu();

    //get users menu choice
    cout << "Enter menu choice: ";
    char menu_choice;
    std::cin >> menu_choice;

    //execute menu option
    switch (to_menu_option(menu_choice)) {
      case MenuOption::Bite: {

        bite();

        break;
      }
      case MenuOption::WhipTail: {

        int damage = damage_range(rng);
        whip_tail(damage);

        break;
      }
      case MenuOption::BreathFire: {

        int seconds = seconds_range(rng);
        int damage = damage_range(rng);
        breath_fire(damage, seconds);

        break;
      }
      case MenuOption::Quit: {

        program_is_running = false;

      }
      default:

        break;

    }

    cout << endl;
  }

  // display exit message
  cout << "Thank you for playing!!!" << endl;

  return 0;
}