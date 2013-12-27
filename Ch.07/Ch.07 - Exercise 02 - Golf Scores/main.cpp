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

using namespace std;

//********************************
//
//  Function Declaration Section
//
//********************************

int input(int * ptr);
float average(int * ptr, int count);
void display(int * ptr, int count, float avg);

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
	int golfArray[10];
	int numberofscores = 0;
	float averagescore = 0;

	//*  Main Code

	numberofscores = input(golfArray);
	averagescore = average(golfArray,numberofscores);
	display(golfArray, numberofscores, averagescore);
	

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

int input(int * ptr)
{
	//*  Variable Declaration
	int count = 0;
	int max = 10;
	int i = 0;


	//*  Main Code

	cout << "Please enter up to 10 golf scores <Any Non # input will terminate>: " << endl;
	cout << "Score #1: ";

	while (i < max && cin >> ptr[i])
	{
		if (i < max)
		{
			if (ptr[i] > 0)
			{
				i++;
				cout << "Score #" << i+1 << ": ";
				
			}
			else
			{
				cout << "You entered a negative score!  That won't work." << endl;
				cout << "Score #" << i+1 << ": ";
			}
		}

	}

	count = i;

	//*  Program End
	
	return count;
}

float average(int * ptr, int count)
{
	//*  Variable Declaration
	int avg = 0;

	//*  Main Code

	for (int i = 0; i < count; i++)
	{
		avg = avg + ptr[i];
	}
	
	avg = avg/count;

	return avg;

	//*  Program End
}

void display(int * ptr, int count, float avg)
{
	//*  Variable Declaration
	

	//*  Main Code

	cout << endl << endl << "Time to display the results: ";

	for (int i = 0; i < count; i++)
	{
		cout << " " << ptr[i];
	}
	
	cout << endl << "The Average Score is: " << avg << endl;

	return;

	//*  Program End
}