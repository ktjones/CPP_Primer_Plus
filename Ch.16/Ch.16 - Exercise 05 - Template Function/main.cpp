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

#include <iostream>
#include <string>
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

template <class T>
int reduce(T ar[], int n);



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
	long arraylong[num] = {5,5,4,4,1};
	string arraystring[num] = { "Todd", "Todd", "Kandi", "Kandi", "Spatula" };


	//*  Main Code
	count = reduce(arraylong,num);
	
	cout << count << endl;

	count = reduce(arraystring, num);

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
template <class T>
int reduce(T ar[], int n)
{

	//initialize container
	int int_temp = 0;
	set<T> set_temp(ar,ar+n);

	//return a value equal to the number of elements in the array
	int_temp = set_temp.size();


	//display before and after
	for (int x=0; x<n; x++)
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