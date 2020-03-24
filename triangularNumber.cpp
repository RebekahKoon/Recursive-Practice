/*********************************************************************
** Program name: lab5
** Author:       Rebekah Koon
** Date:         7/23/19
** Description:  Source file for the triangularNumber function, which
**               finds the triangular number of an integer.
*********************************************************************/

#include "triangularNumber.hpp"


/*********************************************************************
** Description: Function triangularNumber takes in a positive integer
**              as a parameter. Calculates and returns the triangular
**              number of the integer using recursion.
**              Source: https://www.mathsisfun.com/algebra/
**              triangular-numbers.html
*********************************************************************/
int triangularNumber(int N)
{
    //Base case
    if (N == 1)
    {
        return 1;
    }

    //Finding the sum of the sequence of numbers
    else
    {
        return triangularNumber(N - 1) + N;
    }
}