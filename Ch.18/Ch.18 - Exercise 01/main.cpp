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
#include <fstream>
#include <initializer_list>
#include <vector>

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
T average_list(initializer_list<T> il);



//***************************************************************************************************
//
//  Main Program Section
//
//***************************************************************************************************

int main(int nNumberofArgs, char* pszArgs[])
{
	//*  Variable Declaration


	//*  Main Code
	

	// list of double deduced from list contents
	auto q = average_list({ 15.4, 10.7, 9.0 });
	cout << q << endl;
	
	// list of int deduced from list contents
	cout << average_list({ 20, 30, 19, 17, 45, 38 }) << endl;
	
	// forced list of double
	auto ad = average_list<double>({ 'A', 70, 65.33 });
	cout << ad << endl;
	return 0;


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

template <typename T>
T average_list(initializer_list<T> il)
{

	//*  Variable Declaration
	vector<T> temp = il;

	//*  Main Code

	//*  Program End

	return temp[0];
}

