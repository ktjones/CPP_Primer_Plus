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





//********************************
//
//  Function Declaration Section
//
//********************************

double calculate(double, double, double (*)(double, double));
double add(double, double);
double subtract(double, double);
double multiply(double, double);
double divide(double, double);

//********************************
//
//  Main Program Section
//
//********************************

int main(int nNumberofArgs, char* pszArgs[])
{
	//*  Variable Declaration
	
	double q = 0;
	double a = 0;
	double b = 0;
	char operation = '\0';

	//*  Main Code
	
	cout << "Welcome to the add/subtract program." << endl;
	cout << "Please enter the operation you would like to perform:" << endl;
	cout << "(a) for addition\t(s) for subtraction" << endl;
	cout << "(m) for multiply\t(d) for divide" << endl;
	cout << "(q) to quit" << endl << endl;
	cout << "Choice: ";
	cin >> operation;
	
	while (operation != 'q')
	{
		if(operation == 'a')
		{
			cout << endl << "First Number: ";
			cin >> a;
			cout << endl << "Second Number: ";
			cin >> b;
			q = calculate(a,b,add);
			cout << endl << "The answer is: " << q << endl << endl; 
		}
		else if (operation == 'b')
		{
			cout << endl << "First Number: ";
			cin >> a;
			cout << endl << "Second Number: ";
			cin >> b;
			q = calculate(a,b,subtract);
			cout << endl << "The answer is: " << q << endl << endl; 
		}
		else if (operation == 'm')
		{
			cout << endl << "First Number: ";
			cin >> a;
			cout << endl << "Second Number: ";
			cin >> b;
			q = calculate(a,b,multiply);
			cout << endl << "The answer is: " << q << endl << endl; 
		}
		else if (operation == 'd')
		{
			cout << endl << "First Number: ";
			cin >> a;
			cout << endl << "Second Number: ";
			cin >> b;
			q = calculate(a,b,divide);
			cout << endl << "The answer is: " << q << endl << endl; 
		}
		else
		{
			cout << endl << "You chose some random and weird entry.  Try again." << endl << endl;
		}

		cout << "Welcome to the add/subtract program." << endl;
		cout << "Please enter the operation you would like to perform:" << endl;
		cout << "(a) for addition\t(s) for subtraction" << endl;
		cout << "(m) for multiply\t(d) for divide" << endl;
		cout << "(q) to quit" << endl << endl;
		cout << "Choice: ";
		cin >> operation;
	
	}

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

double calculate(double x, double y, double (*function)(double, double))
{

	//*  Variable Declaration

	double answer = -1;

	//*  Main Code
	
	answer = function(x,y);

	//*  Program End

	return answer;
}

//********************************

double add(double x, double y)
{

	//*  Variable Declaration

	//*  Main Code

	return x + y;

	//*  Program End

}

//********************************

double subtract(double x, double y)
{

	//*  Variable Declaration

	//*  Main Code

	return x - y;

	//*  Program End

}

//********************************

double multiply(double x, double y)
{

	//*  Variable Declaration

	//*  Main Code

	return x * y;

	//*  Program End

}

//********************************

double divide(double x, double y)
{

	//*  Variable Declaration

	//*  Main Code

	return x / y;

	//*  Program End

}

//********************************