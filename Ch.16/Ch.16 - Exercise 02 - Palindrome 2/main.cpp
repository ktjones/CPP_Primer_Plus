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
#include <cctype>

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
	string input;
	string final;
	int flag = 0;


	//*  Main Code
	cout << "Hey, enter a string: ";
	getline(cin,input);
	
	//remove punctuation and capitals
	for(unsigned int i = 0; i < input.size(); i++)
	{
	
		if(!ispunct(input[i]) && !isspace(input[i]))
		{
			final.push_back(tolower(input[i]));
		}
	
	}

	cout << "Input: " << input << endl;
	cout << "Final: " << final << endl;

	//check for palindrome
	for(unsigned int i = 0; i < final.size(); i++)
	{

		if(final[i] != final[final.size()-1-i])
		{
			flag = 1;
			break;
		}
		
	}

	if(flag == 1)
	{
		cout << "They Don't Match" << endl;
	}
	else
	{
		cout << "They Do Match" << endl;
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
