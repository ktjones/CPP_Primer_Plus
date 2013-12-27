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

void print(string);
void print(string, int, int);


//********************************
//
//  Main Program Section
//
//********************************

int main(int nNumberofArgs, char* pszArgs[])
{
	//*  Variable Declaration
	string word = "\0";
	string wordtemp = "\0";
	int flag = 0;
	int count = 0;

	//*  Main Code
	
	cout << endl << "Enter a word or phrase, (q) to quit: ";
	getline(cin,word);

	while (word != "q")
	{
		print(word);
		count++;
		wordtemp = word;
		cout << endl << "Enter a word or phrase, (q) to quit: ";
		getline(cin,word);
	}

	cout << endl << "One last thing..." << endl << endl;

	flag = count;

	print(wordtemp,flag,count);

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

void print(string str)
{
	//*  Variable Declaration
	

	//*  Main Code

	cout << endl << "Your word or phrase is: ";
	cout << str << endl;

	//*  Program End

	return;

}
//********************************
void print(string str, int n, int x)
{
	//*  Variable Declaration


	//*  Main Code

	cout << endl << "Your word or phrase is: " << endl;
	
	if (n != 0)
	{
		for (int i=0; i < x; i++)
		cout << str << endl;
	}
	else
	{
		cout << endl << "Your word or phrase is: ";
		cout << str << endl;
	}
	//*  Program End

	return;

}
//********************************