//***************************************************************************************************
//
//  C++ Template Program
//
//***************************************************************************************************
//*******************************
//
//  Standard Header
//
//*******************************

#include <iostream>
#include <string>
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

long double sum_value(){ return 0; };

template<typename T, typename... Args>
long double sum_value(const T& value, const Args&... args);



//***************************************************************************************************
//
//  Main Program Section
//
//***************************************************************************************************

int main(int nNumberofArgs, char* pszArgs[])
{
	//*  Variable Declaration
	long double final = 0;

	//*  Main Code
	final = sum_value(1.0,2.0,3.0,4.0);
	cout << final << endl;

	final = sum_value(1.0, 2.0, 3.0, 4.0,5.0,6.0,7.0);
	cout << final << endl;

	//*  Program End
	//   - wait until user is ready before terminating program
	//   - to allow the user to see the program results

	cout << endl << endl;
	system("PAUSE");
	return 0;
}

//***************************************************************************************************
//
//  Functions Begin Here
//
//***************************************************************************************************

//********************************
//
//	Function #1
//
//********************************

template<typename T, typename... Args>
long double sum_value(const T& value, const Args&... args)
{

	//*  Variable Declaration
	

	//*  Main Code
	

	//*  Program End
	
	return value + sum_value(args...);

}

    


	


