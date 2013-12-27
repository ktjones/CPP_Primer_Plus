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
using namespace std;

//********************************
//
//  Function Declaration Section
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
	int nheightFeet=0;
	int nheightInches=0;
	int nweightpounds=0;
	float fweightkilograms=0;
	float fheightMeters=0;
	float fBMI=0;

	//*  Main Code

	cout << "What is your height?" << endl;
	cout << "Feet: ";
	cin >> nheightFeet;
	cout << "Inches: ";
	cin >> nheightInches;
	cout << endl;

	cout << endl;
	cout << "What is your weight (lbs.): ";
	cin >> nweightpounds;
	
	fheightMeters = ((nheightFeet*12)+(nheightInches))*0.0254;
	fweightkilograms = nweightpounds/2.2;

	fBMI = fweightkilograms/(fheightMeters * fheightMeters);

	cout << endl;
	cout << "Your BMI is " << fBMI << endl;

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



