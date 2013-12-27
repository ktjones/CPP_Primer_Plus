//*******************************
//
//  C++ Template Program
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
#include <cstring>
#include <string>

using namespace std;


//********************************
//
//  Function Declaration Section
//
//********************************

struct antarctica_years_end
{
	int year;
};


//********************************
//
//  Main Program Section
//
//********************************

int main(int nNumberofArgs, char* pszArgs[])
{
	//*  Variable Declaration
	
	//*  Main Code
	
	antarctica_years_end s01, s02, s03;
	s01.year = 1998;
	antarctica_years_end *pa = &s02;
	pa->year = 1999;
	antarctica_years_end trio[3];
	trio[0].year = 2003;
	cout << trio->year << endl;
	const antarctica_years_end *arp[3] = {&s01, &s02, &s03};
	cout << arp[1]->year << endl;
	const antarctica_years_end **ppa = arp;
	auto ppb = arp;
	cout << (*ppa)->year << endl;
	cout << (*(ppb+1))->year << endl;
	
	//*  Program End
	//   - wait until user is ready before terminating program
	//   - to allow the user to see the program results

	system("PAUSE");
	return 0;
}

//********************************
//
//  Functions Begin Here
//
//********************************

