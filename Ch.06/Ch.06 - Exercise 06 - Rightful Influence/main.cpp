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
	int nNumberofcontributors = 0;
	int nNumberofGrandPatrons = 0;
	int nNumberofRegularPatrons = 0;
	
	//*  Main Code
	cout << endl << "Please enter the number of contributors: ";
	cin >> nNumberofcontributors;
	cin.get();

	strDBase * pContributors = new strDBase[nNumberofcontributors];

	for (int i=0; i < nNumberofcontributors; i++)
	{
		cout << "Please enter Name #" << i+1 << ": ";
		getline(cin,pContributors[i].nContributorname);
		cout << "Please enter Contribution #" << i+1 << ": ";
		cin >> pContributors[i].dDonation;
		cin.get();
		cout << endl << endl;
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



