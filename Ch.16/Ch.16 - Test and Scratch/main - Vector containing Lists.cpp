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

using namespace std;


//********************************
//
//  Global Variable Declaration
//
//********************************

struct Node
{
	string name;
	double weight;
};

typedef Node T;



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
	vector<list<T>> Todd(3);
	list<T> list0(5);
	list<T> list1(3);
	list<T> list2(2);
	int i = 0;

	//*  Main Code
	vector<list<T>>::iterator vector_list_it;
	list<T>::iterator list_it;

	for (list_it=list0.begin();list_it != list0.end(); list_it++)
	{
		list_it->weight = i*i;
		list_it->name = "jack";
		i++;
	}
	
	for (list_it=list1.begin();list_it != list1.end(); list_it++)
	{
		list_it->weight = i+i;
		list_it->name = "bill";
		i++;
	}

	for (list_it=list2.begin();list_it != list2.end(); list_it++)
	{
		list_it->weight = i-i;
		list_it->name = "john";
		i++;
	}

	Todd[0] = list0;
	Todd[1] = list1;
	Todd[2] = list2;

	vector_list_it = Todd.begin();			// iterator of the vector<list<T>> type, points to Todd.begin(), which is Todd[0].  Moves me through the rows.
	list_it = (*vector_list_it).begin();	// iterator of the list<T> type, points to the list<T> object contained within the vector<list<T>> object pointed to by the vector<list<T>> iterator.  In this case, Todd.
	cout << list_it->name << endl;
	cout << list_it->weight << endl;
	
	advance(list_it,2);
	cout << list_it->name << endl;
	cout << list_it->weight << endl;

	advance(vector_list_it,1);
	list_it = (*vector_list_it).begin();
	cout << list_it->name << endl;
	cout << list_it->weight << endl;


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

