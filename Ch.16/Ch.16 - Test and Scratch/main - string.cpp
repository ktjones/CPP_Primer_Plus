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
	string test1 = string("test1");
	string test2 = string("test2");
	string test3 = string("est");

	//*  Main Code
	cout << test1 << endl;
	
	test1.insert(1,"r");
	cout << test1 << endl;

	string::iterator str_it = test2.begin();
	test2.insert(str_it,test1.begin(),test1.end());
	cout << test2 << endl;

	test2.erase(str_it+1);
	cout << test2 << endl;

	test2.insert(5," ");
	cout << test2 << endl;

	cout << test2.size() << endl;
	test2.resize(5);
	cout << test2 << endl;

	cout << test2.at(4) << endl;

	int loc_test1;

	loc_test1 = test1.find("es");
	cout << loc_test1 << endl;

	loc_test1 = test1.find(test3);
	cout << loc_test1 << endl;

	loc_test1 = test1.find("es",0,2);
	cout << loc_test1 << endl;

	if (loc_test1 == string::npos)
	{
		cout << "Failed to Find" << endl;
	}
	else
	{
		cout << "Bingo Baby!" << endl;
	}

	test2.append(" test2");
	cout << test2 << endl;
	
	test3.swap(test1);
	cout << test1 << "; " << test3 << endl; 

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
