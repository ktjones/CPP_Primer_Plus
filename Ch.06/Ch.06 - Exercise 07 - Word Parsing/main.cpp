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
#include <cctype>

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
	string szword;
	int nvowelCount = 0;
	int nconsonantCount = 0;
	int notherCount = 0;
	int i=0;

	//*  Main Code
	cout << "Please enter a word: ";
	
	cin >> szword;
		
	while (szword != "q")
	{
		if (isalnum(szword[0]))
		{
			if (isalpha(szword[0]))
			{
				if (szword[0] == 'a' || szword[0] == 'e' || szword[0] == 'i' || szword[0] == 'o' ||szword[0] == 'u')
				{
					nvowelCount = nvowelCount+1;
				}
				else
				{
					nconsonantCount = nconsonantCount+1;
				}
			}
	 		else
			{
				notherCount = notherCount+1;
			}
		}	
		else
		{
			notherCount = notherCount+1;
			cout << endl << "No" << endl << endl;
		}
		
		cin >> szword;
		
	}

	cout << endl << "The number of Vowels: " << nvowelCount << endl;
	cout << endl << "The number of Consonants: " << nconsonantCount << endl;
	cout << endl << "The number of Others: " << notherCount << endl;

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



