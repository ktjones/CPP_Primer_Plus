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
#include <fstream>

using namespace std;


//********************************
//
//  Compound Type Declaration Section
//
//********************************




//********************************
//
//  Global Variable Declaration
//
//********************************




//********************************
//
//  Function Declaration Section
//
//********************************

int Fill_array(double *, double *);
void Show_array(const double *, const double *);
void Reverse_array(double *, double *, int);

//********************************
//
//  Main Program Section
//
//********************************

int main(int nNumberofArgs, char* pszArgs[])
{
	//*  Variable Declaration
	const int ArraySize = 10;
	double Array[ArraySize];
	int NumberArrayEntries = 0;

	//*  Main Code

	NumberArrayEntries = Fill_array(Array, Array+ArraySize);
		
	Show_array(Array,Array+NumberArrayEntries);
	Reverse_array(Array, Array+NumberArrayEntries,NumberArrayEntries);
	Show_array(Array,Array+NumberArrayEntries);
	Reverse_array(Array+1, Array+(NumberArrayEntries-1),NumberArrayEntries-2);
	Show_array(Array,Array+NumberArrayEntries);

	//*  Program End
	//   - wait until user is ready before terminating program
	//   - to allow the user to see the program results

	cout << endl << endl;
	system("PAUSE");
	return 0;
}

//********************************
//
//  Functions Begin Here
//
//********************************

	//*  Variable Declaration

	//*  Main Code

	//*  Program End

//********************************

int Fill_array(double * arrayptr, double * arrayptrend)
{
	
	//*  Variable Declaration
	int i = 0;
	int count = 0;

	//*  Main Code

	cout << "Welcome to 'Fill The Array'!  In this function we fill the array" << endl << endl;
	
	while (arrayptr < arrayptrend)
	{
		cout << "Entry #" << i+1 << " : ";
		cin >> *arrayptr;
		if (!cin)
		{
			cin.clear();
			break;
		}
		
		i++;
		arrayptr++;
	}

	count = i;

	//*  Program End

	cout << endl << endl;

	return count;
}

void Show_array(const double * arrayptr, const double * arrayptrend)
{
	//*  Variable Declaration
	int i = 0;

	//*  Main Code
	
	cout << "Here is the array! Enjoy." << endl << endl;

	while (arrayptr < arrayptrend)
	{
		cout << "Entry #" << i << " : " << *arrayptr << endl;
		i++;
		arrayptr++;
	}

	//*  Program End

	cout << endl << endl;

	return;

}

void Reverse_array(double * arrayptr, double * arrayptrend, int count)
{
	//*  Variable Declaration
	double temp = -1;

	//*  Main Code
	
	while (arrayptr < arrayptrend)
	{
		temp = *arrayptr;
		*arrayptr = *(arrayptrend-1);
		*(arrayptrend-1) = temp;

		arrayptr++;
		arrayptrend--;
	}
			
	//*  Program End

	return;

}
