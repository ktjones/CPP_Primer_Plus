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
//  Global Variable Declaration
//
//********************************





//********************************
//
//  Compound Type Declaration Section
//
//********************************





//********************************
//
//  Function Declaration Section
//
//********************************

template <typename T>
T maxfunc(T array[]);


//********************************
//
//  Main Program Section
//
//********************************

int main(int nNumberofArgs, char* pszArgs[])
{
	//*  Variable Declaration
	int arrayofints[5] = {1,10,50,40,30};
	int max;
	double arrayofdoubles[5] = {1.5,2.6,5.4,4.5,3.5};
	double dmax;

	//*  Main Code
	max = maxfunc(arrayofints);
	cout << "The maximum integer value is: " << max << endl << endl;
	dmax = maxfunc(arrayofdoubles);
	cout << "The maximum double value is: " << dmax << endl << endl;


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

	//*  Main Codeb

	//*  Program End

//********************************
template <typename T>
T maxfunc(T array[])
{
	//*  Variable Declaration
	T maxvalue;

	//*  Main Code
	
	maxvalue = array[0];

	for (int i=2; i<5; i++)
	{
		if (array[i] > maxvalue)
		{
			maxvalue = array[i];
		}
	}

	//*  Program End
	return maxvalue;

}
//********************************