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
#include <string>
#include <algorithm>
#include "header.h"

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

void ShowStr(const string & str);
void GetStrs(ifstream & is, vector<string> & v);


//***************************************************************************************************
//
//  Main Program Section
//
//***************************************************************************************************

int main(int nNumberofArgs, char* pszArgs[])
{
	//*  Variable Declaration
	
	vector<string> vostr;
	string temp;

	//*  Main Code
	
	// acquire strings
	cout << "Enter strings (empty line to quit):\n";
	
	while (getline(cin, temp) && temp[0] != '\0')
	{
		vostr.push_back(temp);
	}

	cout << "Here is your input.\n";
	
	for_each(vostr.begin(), vostr.end(), ShowStr);
		
	// store in a file
	ofstream fout("strings.dat", ios_base::out | ios_base::binary);
	for_each(vostr.begin(), vostr.end(), Store(fout));
	fout.close();
	
	
	// recover file contents
	vector<string> vistr;
	
	ifstream fin("strings.dat", ios_base::in | ios_base::binary);
	
	if (!fin.is_open())
	{
		cerr << "Could not open file for input.\n";
		exit(EXIT_FAILURE);
	}
	
	GetStrs(fin, vistr);

	cout << "\nHere are the strings read from the file:\n";
	for_each(vistr.begin(), vistr.end(), ShowStr);
	

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
//	Function #1 - Show String
//
//********************************

void ShowStr(const string & str)
{

	//*  Variable Declaration


	//*  Main Code

	cout << str << endl;

	//*  Program End

	return;
}


//********************************
//
//	Function #2 - Get info from file
//
//********************************

void GetStrs(ifstream & is, vector<string> & v)
{

	//*  Variable Declaration
	int len;
	string input;
	char ch;

	//*  Main Code
	while (!is.eof())
	{
		//read the string length
		is.read((char *)&len, sizeof(std::size_t));

		input = "";
		//Read the info into the string
		for (int x = 0; x < len; x++)
		{
			
			is.get(ch);
			input = input + ch;

		}

		v.push_back(input);
		len = 0;

	}
	//*  Program End
	
	return;
}

//********************************
//
//	Function #?
//
//********************************

    //*  Variable Declaration

	//*  Main Code

	//*  Program End

//********************************
