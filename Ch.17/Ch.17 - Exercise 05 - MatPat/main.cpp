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
	
	string infile1 = "mat.dat";
	string infile2 = "pat.dat";
	string outfile = "list.dat";
	string temp;

	ifstream fin1;
	ifstream fin2;
	ofstream fout;

	//*  Main Code

	//create the streams
	fin1.open(infile1, ios_base::in);
	fin2.open(infile2, ios_base::in);
	fout.open(outfile, ios_base::out);

	//test for opening success
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
				mat.push_back(temp);
			}
			if (!fin2.eof() && fin2.peek() != EOF)
			{
				getline(fin2, temp);
				pat.push_back(temp);
			}
		}
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

	cout << endl << endl;

	cout << "Writing out to file!" << endl;
	for (auto x : final)
	{
		fout << x << endl;
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
