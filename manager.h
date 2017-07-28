/* File: manager.h
   Author: Mohammad Kazim
   Description: Declares a Manager class where functions
   to perform operations are introduced.
 */
#ifndef MANAGER_H_
#define MANAGER_H_
#include <iostream>
#include <string>

#include "items.h"

// This file just contains the Declaration of manager class

class Manager {
 public:
   void Menu();  //  Function for Main Menu
   std::string Add();  //  Adds items
   void Remove(std::string);  //  Removes item
   void Search();  //  Searches Item
};

#endif