## Program name: lab5
## Author:       Rebekah Koon
## Date:         7/23/19
## Description:  The program has the option to either reverse a string,
##               find the sum of integers in an array, or find an integer's
##               triangular number.

lab5: reverseString.o sumOfIntegers.o triangularNumber.o Menu.o validInput.o main.o
	g++ -g reverseString.o sumOfIntegers.o triangularNumber.o Menu.o validInput.o main.o -o lab5

reverseString.o: reverseString.cpp reverseString.hpp
	g++ -c reverseString.cpp

sumOfIntegers.o: sumOfIntegers.cpp sumOfIntegers.hpp
	g++ -c sumOfIntegers.cpp

triangularNumber.o: triangularNumber.cpp triangularNumber.hpp
	g++ -c triangularNumber.cpp

Menu.o: Menu.cpp Menu.hpp
	g++ -c Menu.cpp

validInput.o: validInput.cpp validInput.hpp
	g++ -c validInput.cpp

main.o: main.cpp
	g++ -c main.cpp

clean:
	rm *.o lab5