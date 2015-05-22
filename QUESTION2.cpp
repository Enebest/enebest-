/*
*	Question2.cpp
*
*	Name:				[ECHU, ENENE BESTMAN ]
*	Department:			[STATISTICS]
*	Matric./Reg. No:	[45070586DE]
*	
*	program that reads two integers and prints and determines
*	if the first is a multiple of the second.
*	
*/

#include <iostream>

int main ()
{
	
	int eu;
	int ei;
	
	std::cout << "\tWelcome!!!\n";
	std::cout << "This program reads two integers and determines and prints\n";
	std::cout << "\tif the first is a multiple of the second.\n";
		 
	std::cout << "Enter First Integer: ";
	std::cin >> eu;
	
	std::cout << "Enter second Integer: ";
	std::cin >> ei;
	
	if (eu % ei == 0)
	std::cout << "\n" << eu << " is a multiple of " << ei;
	
	else
	std::cout << "\n" << eu << " is not a multiple of " << ei;
	return 0;
}
