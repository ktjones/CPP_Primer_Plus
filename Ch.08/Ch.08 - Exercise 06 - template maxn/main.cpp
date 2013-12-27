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
#include <cstring>

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
T maxfunc(T array[], int loopcount);

template <> 
char* maxfunc<char*>(char* array[], int loopcount);

//********************************
//
//  Main Program Section
//
//********************************

int main(int nNumberofArgs, char* pszArgs[])
{
	//*  Variable Declaration
	int arraysize=0;
	int arrayofints[6] = {1,2,3,4,5,6};
	double arrayofdouble[4] = {10.0,20.0,30.0,40.0};
	int intmax = 0;
	double doublemax = 0.0;
	char * arrayofchar[4] = {"test","testing","testy","toddistasty"};
	char * charmaxvalue = '\0';

	//*  Main Code
	
	intmax = maxfunc(arrayofints,6);
	doublemax = maxfunc(arrayofdouble,4);
	charmaxvalue = maxfunc(arrayofchar,4);

	cout << "Largest Integer: " << intmax << endl;
	cout << "Largest Double: "	<< doublemax << endl;
	cout << "Longest String: "	<< charmaxvalue << endl;

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
template <typename T>
T maxfunc(T array[], int loopcount)
{
	//*  Variable Declaration
	T maxvalue;

	//*  Main Code
	
	
	maxvalue = array[0];
	
	for (int i=2; i<loopcount+1; i++)
	{
		if (array[i-1] > maxvalue)
		{
			maxvalue = array[i-1];
		}
	}

	//*  Program End
	return maxvalue;

}
//********************************
template <>
char* maxfunc<char*>(char* array[], int loopcount)
{
	//*  Variable Declaration
	char * maxvalue = '\0';

	//*  Main Code
	
	
	maxvalue = array[0];
	
	for (int i=2; i<loopcount+1; i++)
	{
		if (strlen(array[i-1]) > strlen(maxvalue))
		{
			maxvalue = array[i-1];
		}
	}

	//*  Program End
	return maxvalue;

}
//********************************