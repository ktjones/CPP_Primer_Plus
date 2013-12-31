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
	string infile1;
	string infile2;
	string outfile;
	string temp;
	
	char ch;

	ofstream fout;
	ifstream fin1;
	ifstream fin2;

	//*  Main Code
	
	// Ask user for the input and output file names
	cout << "Please enter the first input filename (no spaces please): ";
	getline(cin, infile1);

	cout << "Please enter the second input filename (no spaces please): ";
	getline(cin, infile2);

	cout << "Please enter the output filename (no spaces please): ";
	getline(cin, outfile);

	fin1.open(infile1, ios_base::in);
	fin2.open(infile2, ios_base::in);
	fout.open(outfile, ios_base::out);

	if (!fin1.is_open())
	{
		cerr << "Could not open " << infile1 << endl;
		fin1.clear();
	}
	else if (!fin2.is_open())
	{
		cerr << "Could not open " << infile2 << endl;
		fin1.clear();
	}
	else if (!fout.is_open())
	{
		cerr << "Could not open " << outfile << endl;
		fout.clear();
	}
	else
	{
		while (!fin1.eof() && !fin2.eof())
		{
			
			if (!fin1.eof() && fin1.peek() != EOF)
			{
				getline(fin1, temp);
				fout << temp << " ";
			}
			if (!fin2.eof() && fin2.peek() != EOF)
			{
				getline(fin2, temp);
				fout << temp;
			}
			fout << endl;

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
