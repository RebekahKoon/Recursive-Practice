/*********************************************************************
** Program name: lab5
** Author:       Rebekah Koon
** Date:         7/23/19
** Description:  Source file for the reverseString function, which
**               reverse a string taken in as a parameter.
*********************************************************************/

#include "reverseString.hpp"


/*********************************************************************
** Description: Void function reverseString takes in a string as a 
**              parameter. Uses recursion to reverse the string.
**              Source: http://www.cplusplus.com/forum/beginner/14310/
*********************************************************************/
void reverseString(string stringIn)
{
    //Finding length of the string
    int stringLength = stringIn.length();

    //Base case if length of string is 1
    if (stringLength == 1)
    {
        cout << stringIn.at(stringLength - 1) << endl;
    }

    //Reversing string with more than one character
    else if (stringLength > 1)
    {
        //Printing last character of the string
        cout << stringIn.at(stringLength - 1);

        //Length of string without last letter
        stringLength -= 1;

        //Call reverseString with substring that doesn't include last character
        reverseString(stringIn.substr(0, stringLength));
    }
}