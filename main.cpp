/*********************************************************************
** Program name: lab5
** Author:       Rebekah Koon
** Date:         7/23/19
** Description:  This program can either find the reverse of a string,
**               find the sum of an array, or find an integer's 
**               triangular number. The user enters which of these 
**               three options they would like to find. The program
**               then either reverses an inputted string, sums the
**               user's array, or finds the triangular number of the
**               user's input.
*********************************************************************/

#include "Menu.hpp"

//Used to determine what option a user selected
enum RecursiveFunctions {REVERSE_STRING = 1, SUM_INTEGERS, 
                         TRIANGULAR_NUM, QUIT};

int main()
{
    int choice;

    Menu programMenu;

    //Determining what action the user would like to perform
    choice = programMenu.chooseFunction();

    //Program quits when user enters 4
    while (choice != QUIT)
    {
        //Reverses user's inputted string
        if (choice == REVERSE_STRING)
        {
            programMenu.findReversedString();
        }

        //Finds sum of an array
        else if (choice == SUM_INTEGERS)
        {
            programMenu.findSumOfArray();
        }

        //Finds triangular number of an integer
        else if (choice == TRIANGULAR_NUM)
        {
            programMenu.findTriangularNumber();
        }

        //Determining if user wants to choose another option
        choice = programMenu.chooseFunction();
    }

    cout << "Goodbye!" << endl;

    return 0;
}