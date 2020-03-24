/*********************************************************************
** Program name: lab5
** Author:       Rebekah Koon
** Date:         7/23/19
** Description:  Header file for the Menu class that has functions to
**               ask the user to choose what option they want to 
**               perform and functions to call stringReversed, 
**               findSumOfArray, and findTriangularNumber.
**               Adapted from project 1 menu.
*********************************************************************/

#ifndef MENU_HPP
#define MENU_HPP

#include "validInput.hpp"
#include "reverseString.hpp"
#include "sumOfIntegers.hpp"
#include "triangularNumber.hpp"

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::getline;
using std::atoi;
using std::string;
using std::endl;

class Menu
{
    public:
        int chooseFunction();
        void findReversedString();
        void findSumOfArray();
        void findTriangularNumber();
};

#endif