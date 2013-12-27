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

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>

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





//***************************************************************************************************
//
//  Main Program Section
//
//***************************************************************************************************

int main(int nNumberofArgs, char* pszArgs[])
{
	//*  Variable Declaration
	vector<string> mat;
	vector<string> pat;
	set<string> final;
	string temp;

	//*  Main Code

	cout << "Mat, you first.  Enter your guest names.  'q' to quit" << endl;
	cin >> temp;

	while (temp != "q")
	{
		mat.push_back(temp);
		cin >> temp;
	}

	cout << endl << endl;

	cout << "Pat, your next.  Enter your guest names.  'q' to quit" << endl;
	cin >> temp;

	while (temp != "q")
	{
		pat.push_back(temp);
		cin >> temp;
	}

	sort(mat.begin(), mat.end());
	sort(pat.begin(), pat.end());

	cout << endl << endl;

	cout << "Mat's List: ";
	for (auto x : mat)
	{
		cout << x << ", ";
	}

	cout << endl << endl;

	cout << "Pat's List: ";
	for (auto x : pat)
	{
		cout << x << ", ";
	}

	cout << endl << endl;

	cout << "Merging and Removing Duplicates Now!";

	cout << endl << endl;

	final.insert(mat.begin(), mat.end());
	final.insert(pat.begin(), pat.end());

	cout << "Final Party List: ";
	for (auto x : final)
	{
		cout << x << ", ";
	}


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

    //*  Variable Declaration

	//*  Main Code

	//*  Program End

//********************************
