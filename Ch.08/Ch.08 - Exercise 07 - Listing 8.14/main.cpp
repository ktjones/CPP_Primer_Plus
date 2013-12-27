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
//  Global Variable Declaration
//
//********************************





//********************************
//
//  Compound Type Declaration Section
//
//********************************

struct debts
{
    char name[50];
    double amount;
};



//********************************
//
//  Function Declaration Section
//
//********************************

template <typename T>            // template A
void SumArray(T arr[], int n);

template <typename T>            // template B
void SumArray(T * arr[], int n);




//********************************
//
//  Main Program Section
//
//********************************

int main(int nNumberofArgs, char* pszArgs[])
{
	//*  Variable Declaration
	int things[6] = {13, 31, 103, 301, 310, 130};
    struct debts mr_E[3] =
    {
        {"Ima Wolfe", 2400.0},
        {"Ura Foxe", 1300.0},
        {"Iby Stout", 1800.0}
    };
    double * pd[3]; 

	//*  Main Code
	
	// set pointers to the amount members of the structures in mr_E
    for (int i = 0; i < 3; i++)
        pd[i] = &mr_E[i].amount;
    
    cout << "Listing Mr. E's counts of things:\n";

	// things is an array of int
    SumArray(things, 6);  // uses template A
    cout << "Listing Mr. E's debts:\n";

	// pd is an array of pointers to double
    SumArray(pd, 3);      // uses template B (more specialized)
    
	// cin.get();

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
template <typename T>
void SumArray(T arr[], int n)
{
    //*  Variable Declaration
	T sumvalue = 0;

	//*  Main Code
	using namespace std;
    
	cout << endl << "template A\n";
    
	for (int i = 0; i < n; i++)
	{
		sumvalue += arr[i];
	}
	
	cout << sumvalue << ' ' << endl;
	
	//*  Program End
}
//********************************

template <typename T>
void SumArray(T * arr[], int n)
{
    //*  Variable Declaration
	T sumvalue = 0;

	//*  Main Code
	using namespace std;
    
	cout << endl << "template B\n";
    
	for (int i = 0; i < n; i++)
	{
		sumvalue += *arr[i];
	}
	
	cout << sumvalue << ' ' << endl;
	

	//*  Program End
}
