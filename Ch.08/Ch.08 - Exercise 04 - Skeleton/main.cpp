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
#include <cstring>

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

struct stringy 
{
	char * str; // points to a string
	int ct; // length of string (not counting '\0')
};



//********************************
//
//  Function Declaration Section
//
//********************************

void set(stringy &, const char []);
void show(const stringy &cstr, const int loopcount = 1);
void show(const char *cstr, const int loopcount = 1);

//********************************
//
//  Main Program Section
//
//********************************

int main(int nNumberofArgs, char* pszArgs[])
{
	//*  Variable Declaration
	
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";

	//*  Main Code
			
	set(beany, testing); 
	
	// first argument is a reference,
	// allocates space to hold copy of testing,
	// sets str member of beany to point to the
	// new block, copies testing to new block,
	// and sets ct member of beany
	
	
	show(beany); // prints member string once
	show(beany, 2); // prints member string twice
	
	testing[0] = 'D';
	testing[1] = 'u';
	
	show(testing); // prints testing string once
	show(testing, 3); // prints testing string thrice
	show("Done!");
	
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

void set(stringy &cstr, const char cstrarray[])
{
	
    //*  Variable Declaration
	cstr.str = new char[strlen(cstrarray)];
	

	//*  Main Code
	strcpy(cstr.str,cstrarray);
	cstr.ct = strlen(cstr.str);


	//*  Program End

	return;
}
//********************************
void show(const stringy &cstr, const int loopcount)
{
	
    //*  Variable Declaration



	//*  Main Code
	for (int i=0; i< loopcount; i++)
	{
		cout << endl << cstr.str << endl;
	}
	
	//*  Program End

	return;
}
//********************************
void show(const char *cstr, const int loopcount)
{
	
    //*  Variable Declaration



	//*  Main Code
	for (int i=0; i< loopcount; i++)
	{
		cout << endl << cstr << endl;
	}
	
	//*  Program End

	return;
}
//********************************