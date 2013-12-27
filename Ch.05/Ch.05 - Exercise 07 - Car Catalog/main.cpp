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
#include <string>
#include <iostream>
using namespace std;

//********************************
//
//  Function Declaration Section
//
//********************************



//********************************
//
//  Compound Type Declaration Section
//
//********************************
struct car
{
	string model;
	int year;
};


//********************************
//
//  Global Variable Declaration
//
//********************************



//********************************
//
//  Main Program Section
//
//********************************

int main(int nNumberofArgs, char* pszArgs[])
{
	//*  Variable Declaration
	int nArraySizeUserInput;
	
	//*  Main Code
	cout << "Enter in the number of cars you have: ";
	cin >> nArraySizeUserInput;
	cin.get();

	car * carptr = new car[nArraySizeUserInput];
	
	for(int i = 0; i < nArraySizeUserInput; i++)
	{
		cout << "Please enter the catalog #" << i+1 << ": " << endl;
		cout << "Model #: ";
		getline(cin, carptr[i].model);
		cout << "Year: ";
		cin >> carptr[i].year;
		cin.get();				// gets rid of the trailing '\n' that the preceding cin left
		
	} 
	
	cout << endl << endl;

	for(int i = 0; i < nArraySizeUserInput; i++)
	{
		cout << carptr[i].year << "\t";
		cout << carptr[i].model << endl;
	}
	
	cout << endl << endl;

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



