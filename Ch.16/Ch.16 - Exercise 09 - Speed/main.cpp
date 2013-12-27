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

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <time.h>
#include <vector>;
#include <list>;

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
	srand(time(0));
	int temp = 0;
	int size = 1000000;
	vector<int> vi0(size);
	vector<int> vi(size);
	list<int> li(size);

	//*  Main Code
	for (auto x = vi0.begin(); x < vi0.end(); x++)
	{
		temp = rand() % 10 + 1;
		*x = temp;
	}

	copy(vi0.begin(), vi0.end(), vi.begin());
	copy(vi0.begin(), vi0.end(), li.begin());

	clock_t start1 = clock();
	sort(vi.begin(), vi.end());
	clock_t end1 = clock();
	cout << "Sort Algo: ";
	cout << (double)(end1 - start1) / CLOCKS_PER_SEC;
	cout << endl;
	
	clock_t start2 = clock();
	li.sort();
	clock_t end2 = clock();
	cout << "List Algo: ";
	cout << (double)(end2 - start2) / CLOCKS_PER_SEC;
	cout << endl;


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
