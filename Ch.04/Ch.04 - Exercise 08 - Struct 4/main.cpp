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

struct Pizza
{
	string PizzaCoName;
	float Weight;
	int Diameter;
};

//********************************
//
//  Main Program Section
//
//********************************

int main(int nNumberofArgs, char* pszArgs[])
{
	//*  Variable Declaration
	Pizza *stPizzaAnalysis = new Pizza;

	//*  Main Code

	cout << "Please enter the name of the Pizza Co.: ";
	getline(cin, stPizzaAnalysis->PizzaCoName);
	cout << "Please enter the size of the pizza: ";
	cin >> stPizzaAnalysis->Diameter;
	cout << "Please enter the weight of the pizza: ";
	cin >> stPizzaAnalysis->Weight;
	
	cout << endl << endl;
	
	cout << "Pizza Co. Name: " << stPizzaAnalysis->PizzaCoName << endl;
	cout << "Pizza Diameter: " << stPizzaAnalysis->Diameter << endl;
	cout << "Pizza Weight: " << stPizzaAnalysis->Weight << endl;

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



