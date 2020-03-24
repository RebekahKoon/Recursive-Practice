/*********************************************************************
** Program name: lab5
** Author:       Rebekah Koon
** Date:         7/23/19
** Description:  Source file for validInput functions. One function
**               determines if an integer inputted by the user is 
**               valid and another function determines if a string 
**               input is valid. If not valid, asks user to reenter
**               their input.
*********************************************************************/

#include "validInput.hpp"

/***********************************************************************
** Description: Function isValid takes two integers representing the
**              minimum and maximum range for an integer as parameters.
**              Takes user input and, if not a valid integer, asks user
**              to reenter their input. If valid, returns the integer
**              inputted by the user.
**              Source: Adapted from my lab 1 assignment.
***********************************************************************/
int validInput(int minNumber, int maxNumber)
{
    bool valid;
    int numberInt;
    string answer;

    do
    {
        getline(cin, answer);
        valid = true;

        //If string is empty
        if (answer.empty())
        {
            valid = false;
        }

        //If answer is singal character, must be a digit
        else if ((answer.length() == 1) && (!isdigit(answer[0])))
        {
            valid = false;
        }

        else
        {
            //Checking to see if the input is a negative integer
            if ((!isdigit(answer[0])) && (answer[0] != '-'))
            {
            valid = false;
            }

            //Making sure other characters in the string are digits
            for (int i = 1; i < answer.length(); i++)
            {
                if (!isdigit(answer[i]))
                {
                    valid = false;
                }
            }
        }

        if (valid)
        {
            //Convert to an integer
            numberInt = atoi(answer.c_str());

            //Checking to see if the integer is between the min/max range
            if (numberInt < minNumber || numberInt > maxNumber)
            {
                valid = false;
            }
        }

        //Reenter input if not a valid response
        if (!valid)
        {
            cout << "Please only type integers from "
                 << minNumber << " to " << maxNumber << ": ";
        }
    } while (valid == false);

    return numberInt;
}


/***********************************************************************
** Description: Function validInput has the user enter a string. If the 
**              string is not valid, asks user to reenter the input.
**              If valid, returns the string inputted by the user.
**              Source: Adapted from project 1 validInput function.
***********************************************************************/
string validInput()
{
    bool valid;
    string answer;

    do
    {
        getline(cin, answer);
        valid = false;

        //If string is empty
        if (answer.empty())
        {
            valid = false;
        }

        //Determining if input is all whitespace/tabs
        for (int i = 0; i < answer.length(); i++)
        {
            if (answer[i] != ' ' && answer[i] != '\t')
            {
                valid = true;
            }
        }

        //Reentering name if not valid
        if (!valid)
        {
            cout << "Incorrect input. Please enter again: ";
        }
    } while (valid == false);
    
    return answer;
}