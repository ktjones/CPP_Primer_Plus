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
#include <cstring>
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
	char word[100];
    char stopWord[] = "done";
	
	//*  Main Code
	
	cout << "Enter words (to stop, type done): ";
    
    cin >> word;
    int numWords = 0;
 
    while (strcmp(word, stopWord))
    {
        cin >> word;
        numWords++;
    }
 
    cout << "\nTotal words read = " << numWords << endl << endl;
	
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



