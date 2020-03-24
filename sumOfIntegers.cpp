/*********************************************************************
** Program name: lab5
** Author:       Rebekah Koon
** Date:         7/23/19
** Description:  Source file for the sumOfIntegers function, which
**               finds the sum of the integers within an array.
*********************************************************************/

#include "sumOfIntegers.hpp"


/*********************************************************************
** Description: Function sumOfIntegers takes a pointer to an array of
**              integers and an integer for the size of the array as
**              parameters. Uses recursion to find the sum of the 
**              integers in the array. Returns the sum.
*********************************************************************/
int sumOfIntegers(int *arrayInts, int arraySize)
{
    //Finding last number in array
    int arrayNumber = arrayInts[arraySize - 1];

    //Base case if array only has one integer
    if (arraySize == 1)
    {
        return arrayNumber;
    }

    else
    {
        //Resizing array
        arraySize--;

        //Adding last number in array to sum
        return sumOfIntegers(arrayInts, arraySize) + arrayNumber;
    }
}