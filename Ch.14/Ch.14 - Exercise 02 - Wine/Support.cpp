//*******************************
//
//  C++ Template Program - Support Files
//
//*******************************

//*******************************
//
//  Standard Header
//
//*******************************

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <valarray>
#include "header.h"

//using namespace std;

//***************************************************************************************************
//
//  Support Program Section
//
//***************************************************************************************************

Wine::Wine() : std::string("N/A"), Pair(std::valarray<int>(),std::valarray<int>())	// default constructor
{

	years = 0;

}

Wine::Wine(const char * l, int y, const int yr[], const int bot[]) : std::string(l), years(y), Pair(std::valarray<int>(yr,y),std::valarray<int>(bot,y))
		// initialize label to l, number of years to y,
		// vintage years to yr[], bottles to bot[]
{

}

Wine::Wine(const char * l, int y) : std::string(l), years(y), Pair(std::valarray<int>(0,y),std::valarray<int>(0,y))
		// initialize label to l, number of years to y,
		// create array objects of length y
{

}

void Wine::GetBottles()
{

	std::cout << std::endl << std::endl;

	for (int i=0;i<years;i++)
	{
		std::cout << "Vintage Year #" << i+1 << ": ";
		std::cin >> Pair<std::valarray<int>,std::valarray<int>>::first()[i];
		std::cout << "How Many Bottles? ";
		std::cin >> Pair<std::valarray<int>,std::valarray<int>>::second()[i];
	}
		
	std::cout << std::endl << std::endl;

}

std::string & Wine::Label()
{

	return (std::string &) *this;

}

int Wine::sum()
{

	int bsum = 0;

	for (int i=0;i<years;i++)
	{
		bsum += Pair<std::valarray<int>,std::valarray<int>>::second()[i];
	}

	return bsum;

}

void Wine::Show()
{

	std::cout << std::endl << std::endl;

	std::cout << "Vintage Name: " << (std::string &) *this << std::endl;

	for (int i=0;i<years;i++)
	{
		std::cout << "Vintage Year #" << i+1 << ": " << Pair<std::valarray<int>,std::valarray<int>>::first()[i] << std::endl;
		std::cout << "# of Bottles: " << Pair<std::valarray<int>,std::valarray<int>>::second()[i] << std::endl;
	}
		
	std::cout << std::endl << std::endl;


}