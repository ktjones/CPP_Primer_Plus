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
#include <vector>
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

vector<int> lotto(int range, int selected);



//***************************************************************************************************
//
//  Main Program Section
//
//***************************************************************************************************

int main(int nNumberofArgs, char* pszArgs[])
{
	//*  Variable Declaration
	int range = 0;
	int pick = 0;


	//*  Main Code
	cout << "Enter the number of possible selections: ";
	cin >> range;
	cout << "Enter the number of lotto picks: ";
	cin >> pick;

	vector<int> lottopicks(pick);
	lottopicks = lotto(range, pick);

	for (auto x : lottopicks)
	{
		cout << x << ", ";
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
vector<int> lotto(int range, int selected)
{

	vector<int> vec_range(range);
	vector<int> vec_selected(selected);
	int count = 0;

	for (int x = 0; x < vec_range.size(); x++)
	{
		vec_range[x] = x;
	}
	
	random_shuffle(vec_range.begin(), vec_range.end());

	copy(vec_range.begin(), vec_range.begin() + selected, vec_selected.begin());


	return vec_selected;


}