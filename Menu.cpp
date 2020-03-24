/*********************************************************************
** Program name: lab5
** Author:       Rebekah Koon
** Date:         7/23/19
** Description:  Implementation file for the Menu class that has
**               functions to ask the user to choose what option they 
**               want to perform and functions to call stringReversed, 
**               findSumOfArray, and findTriangularNumber.
**               Adapted from project 1 menu.
*********************************************************************/

#include "Menu.hpp"


/*********************************************************************
** Description: chooseFunction gives the user the option to reverse a 
**              string, calculate the sum of integers, find the 
**              triangular number of an integer, or quit the program.
**              Returns the user's choice.
*********************************************************************/
int Menu::chooseFunction()
{
    string choiceStr;
    bool validChoice;
    int choice;
    const int CHOICE_MIN = 1,
              CHOICE_MAX = 4;

    cout << "What would you like to do?" << endl;
    cout << "1. Reverse a string." << endl;
    cout << "2. Calculate the sum of a list of integers." << endl;
    cout << "3. Find the triangular number of an integer." << endl;
    cout << "4. Quit the program." << endl << endl;
    cout << "Please enter your choice (1-4): ";

    //Calling validInput to see if the user entered 1 or 2
    choice = validInput(CHOICE_MIN, CHOICE_MAX);

    return choice;
}


/*********************************************************************
** Description: Void function findReversedString asks the user to
**              enter a string to be reversed. Calls reverseString to
*               reverse and print the string.
*********************************************************************/
void Menu::findReversedString()
{
    string answer;

    cout << "Please enter a string to reverse: ";

    //Making sure input is not all whitespace or empty
    answer = validInput();

    //Finding reversed string
    cout << endl << "\"" << answer << "\"" << " reversed is: " << endl;
    reverseString(answer);    
    cout << endl;
}


/*********************************************************************
** Description: Void function findSumOfArray asks the user to enter
**              the size of the array and the integers to be put into
**              the array. Calls sumOfIntegers to find the sum of the
**              numbers in the array.
*********************************************************************/
void Menu::findSumOfArray()
{
    int arraySize,
        arraySum;

    const int MIN_AMOUNT = 1,
              MAX_AMOUNT = 100,
              MIN_NUMBER = -1000000,
              MAX_NUMBER = 1000000;

    //Finding size of array
    cout << endl << "How many integers do you want to sum together?" << endl;
    cout << "Enter an integer from " << MIN_AMOUNT
         << " to " << MAX_AMOUNT << ": ";
    arraySize = validInput(MIN_AMOUNT, MAX_AMOUNT);

    //Creating array
    int *numberArray = new int[arraySize];

    cout << endl << "Please enter " << arraySize << " integers from "
         << MIN_NUMBER << " to " << MAX_NUMBER << "." << endl;

    //Entering requested amount of integers into the array
    for (int i = 0; i < arraySize; i++)
    {
        int value,
            number = i + 1;

        cout << "Enter the value for integer #" << number << ": ";
        value = validInput(MIN_NUMBER, MAX_NUMBER);

        numberArray[i] = value;
    }

    //Finding sum of the array
    arraySum = sumOfIntegers(numberArray, arraySize);

    cout << endl << "The sum of the inputted integers is " 
         << arraySum << endl << endl;

    delete [] numberArray;
}


/*********************************************************************
** Description: Void function findTriangularNumber asks users to input
**              an integer. Calls triangularNumber to find the 
**              integer's triangular number.
*********************************************************************/
void Menu::findTriangularNumber()
{
    int number,
        result;

    const int MIN_NUMBER = 1,
              MAX_NUMBER = 10000;

    //Determining what integer's triangular number will be found
    cout << endl << "Please enter an integer between " << MIN_NUMBER << endl
         << "and " << MAX_NUMBER << " to find its triangular number: ";
    number = validInput(MIN_NUMBER, MAX_NUMBER);

    //Finding triangular number of integer
    result = triangularNumber(number);

    cout << "The triangular number of " << number 
         << " is " << result << endl << endl;
}