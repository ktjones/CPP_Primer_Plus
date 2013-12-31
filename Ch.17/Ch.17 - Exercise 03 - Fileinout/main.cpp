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
#include <string>

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
	string infile;
	string outfile;
	
	char ch;

	ofstream fout;
	ifstream fin;

	//*  Main Code
	
	// Ask user for the input and output file names
	cout << "Please enter the input filename (no spaces please): ";
	getline(cin, infile);

	cout << "Please enter the output filename (no spaces please): ";
	getline(cin, outfile);

	fin.open(infile, ios_base::in);
	fout.open(outfile, ios_base::out);

	if (!fin.is_open())
	{
		cerr << "Could not open " << infile << endl;
		fin.clear();
	}
	else if (!fout.is_open())
	{
		cerr << "Could not open " << outfile << endl;
		fin.clear();
	}
	else
	{
		while (fin.get(ch))
		{
			fout << ch;
		}
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
