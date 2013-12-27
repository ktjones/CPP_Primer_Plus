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
#include <set>
#include <algorithm>

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

int reduce(long ar[], int n);



//***************************************************************************************************
//
//  Main Program Section
//
//***************************************************************************************************

int main(int nNumberofArgs, char* pszArgs[])
{
	//*  Variable Declaration
	const int num = 5;
	int count = 0;
	long array[num] = {5,5,4,4,1};

	//*  Main Code
	count = reduce(array,num);

	cout << count << endl;



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

int reduce(long ar[], int n)
{

	//initialize container
	int int_temp = 0;
	set<long> set_temp(ar,ar+n);

	//sort(set_temp.begin(),set_temp.end());
		
	//return a value equal to the number of elements in the array
	int_temp = set_temp.size();


	//display before and after
	for (auto x=0; x < n;x++)
	{
		cout << ar[x] << ", ";
	}

	cout << endl;

	for (auto x : set_temp)
	{
		cout << x << ", ";
	}

	cout << endl;

	return int_temp;

}