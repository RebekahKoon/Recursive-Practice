/*********************************************************************
** Program name: lab5
** Author:       Rebekah Koon
** Date:         7/23/19
** Description:  Header file for validInput functions. One function
**               determines if an integer inputted by the user is 
**               valid and another function determines if a string 
**               input is valid. If not valid, asks user to reenter
**               their input.
*********************************************************************/

#ifndef VALID_INPUT_HPP
#define VALID_INPUT_HPP

#include <iostream>
#include <string>
#include <cstdlib>

using std::atoi;
using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;

int validInput(int, int);
string validInput();

#endif