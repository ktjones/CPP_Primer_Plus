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

#include <iostream>
#include <fstream>
#include <string>
#include <memory>
#include <vector>
#include <algorithm>
#include <initializer_list>
#include <iterator>
#include <list>
#include <map>

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





//********************************
//
//  Main Program Section
//
//********************************

int main(int nNumberofArgs, char* pszArgs[])
{
	//*  Variable Declaration
	multimap<int,string> test;
	multimap<int,string>::iterator multimap_it;
	
	pair<int,string> item;

	//*  Main Code
	item.first = 1;
	item.second = "New York";

	cout << item.first << endl;
	cout << item.second << endl;
	
	cout << endl;

	test.insert(item);
	multimap_it = test.begin();

	cout << (*multimap_it).first << endl;
	cout << (*multimap_it).second << endl;

	item.first = 2;
	item.second = "LA Baby";

	cout << item.first << endl;
	cout << item.second << endl;
	
	cout << endl;

	test.insert(item);
	multimap_it++;

	cout << (*multimap_it).first << endl;
	cout << (*multimap_it).second << endl;

	item.first = 3;
	item.second = "Chicago";

	cout << item.first << endl;
	cout << item.second << endl;
	
	cout << endl;

	test.insert(item);
	multimap_it++;

	cout << (*multimap_it).first << endl;
	cout << (*multimap_it).second << endl;

	pair<multimap<int,string>::iterator,multimap<int,string>::iterator> range = test.equal_range(1);
	
	cout << endl;
	cout << "Results of Equal_Range: " << endl;
	multimap<int,string>::iterator multimap_it2;
	for (multimap_it2 = range.first; multimap_it2 != range.second; ++multimap_it2)
	{
		cout << (*multimap_it2).second << endl;
	}
	
	//    Program End
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
