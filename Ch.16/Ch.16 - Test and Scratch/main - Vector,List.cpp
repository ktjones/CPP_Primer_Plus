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

#include <iostream>
#include <fstream>
#include <string>
#include <memory>
#include <vector>
#include <algorithm>
#include <initializer_list>
#include <iterator>
#include <list>

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





//********************************
//
//  Main Program Section
//
//********************************

int main(int nNumberofArgs, char* pszArgs[])
{
	//*  Variable Declaration
	int testintarray[] = {5,2,3,4,1};
	char testchararray[] = {'t','o','d','d'};
	vector<int> bob(5);


	//*  Main Code
	
	for (int i=0;i<5;i++)
	{
		cout << testintarray[i] << endl;
	}

	sort(testintarray,testintarray+5);
	copy(testintarray,testintarray+5,bob.begin());
	
	cout << endl << endl;

	for (int i=0;i<5;i++)
	{
		cout << bob[i] << endl;
	}

	ostream_iterator<int,char> out_iter(cout,"\n");

	cout << endl << endl;

	copy(bob.begin(),bob.end(),out_iter);

	vector<double> todd(10);
	list<int> jim(10);
	list<int>::iterator jim_it = jim.begin();
	int j=0;

	cout << endl << endl;

	while(jim_it != jim.end())
	{
		*jim_it = j;
		cout << *jim_it << endl;
		jim_it++;
		j++;	
	}

	//*  Program End
	//   - wait until user is ready before terminating program
	//   - to allow the user to see the program results

	cout << endl << endl;
	system("PAUSE");
	return 0;
}

//********************************
//
//  Functions Begin Here
//
//********************************

//*  Variable Declaration

	//*  Main Code

	//*  Program End

//********************************
