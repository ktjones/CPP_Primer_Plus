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
#include <string>
using namespace std;

//********************************
//
//  Function Declaration Section
//
//********************************



//********************************
//
//  Compound Type Declaration Section
//
//********************************

struct strDBase
{
	string nContributorname;
	double dDonation;
};

//********************************
//
//  Global Variable Declaration
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
	fstream fin;
	int nNumberofcontributors = 0;
	int nNumberofGrandPatrons = 0;
	int nNumberofRegularPatrons = 0;
	
	//*  Main Code
	fin.open("contributors.txt");
	fin >> nNumberofcontributors;
	fin.get();
	
	strDBase * pContributors = new strDBase[nNumberofcontributors];

	for (int i=0; i < nNumberofcontributors; i++)
	{
		getline(fin,pContributors[i].nContributorname);
		fin >> pContributors[i].dDonation;
		fin.get();
		if (pContributors[i].dDonation > 10000)
		{
			nNumberofGrandPatrons += 1;
		}
		else
		{
			nNumberofRegularPatrons +=1;
		}
	}
		
	cout << endl << "Here is the list of Grand Patrons ($10,000 or Higher Donors)" << endl << endl;

	if (nNumberofGrandPatrons > 0)
	{
		for (int i=0; i < nNumberofcontributors; i++)
		{
			if (pContributors[i].dDonation > 10000)
			{
				cout << pContributors[i].nContributorname << endl;
			}
		}
	}
	else
	{
		cout << "Sorry, there are no Grand Patrons!" << endl << endl;
	}

	cout << endl << "Here is the list of Regular Patrons" << endl << endl;

	if (nNumberofRegularPatrons > 0)
	{
		for (int i=0; i < nNumberofcontributors; i++)
		{
			if (pContributors[i].dDonation < 10000)
			{
				cout << pContributors[i].nContributorname << endl;
			}
		}
	}
	else
	{
		cout << "Sorry, there are no regular Patrons!" << endl << endl;
	}
	
	cout << endl << "Thanks and Come Again!" << endl << endl;

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



