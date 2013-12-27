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
#include "namespace.h" 

//********************************
//
//  Name Space Declarations/Definitions
//
//********************************

using namespace std;

namespace SALES
{

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
//  Functions Begin Here
//
//********************************

    //*  Variable Declaration

	//*  Main Code

	//*  Program End

//********************************

void setSales(Sales & s, const double ar[], int n)
	// copies the lesser of 4 or n items from the array ar
	// to the sales member of s and computes and stores the
	// average, maximum, and minimum values of the entered items;
	// remaining elements of sales, if any, set to 0
{
    //*  Variable Declaration
	double average = 0;
	double max = 0;
	double min = 0;
	double sum = 0;


 	//*  Main Code
	
	max = ar[0];
	min = ar[0];

	if (n < 4)
	{
		for (int i = 0; i < n; i++)
		{
			s.sales[i] = ar[i];
			sum+=ar[i];
			if (ar[i] > max)
			{
				max = ar[i];
			}
			if (ar[i] < min)
			{
				min = ar[i];
			}
		}
		
		average = sum/n;
		
		for (int i = n; i < 4; i++)
		{
			s.sales[i] = 0;
		}
	}
	else
	{	
		for (int i = 0; i < 4; i++)
		{
			s.sales[i] = ar[i];
			sum+=ar[i];
			if (ar[i] > max)
			{
				max = ar[i];
			}
			if (ar[i] < min)
			{
				min = ar[i];
			}
		}
		average = sum/4;
	}
	
	s.average = average;
	s.max = max;
	s.min = min;

	//*  Program End
	
	return;

}
//********************************

void setSales(Sales & s)
	// gathers sales for 4 quarters interactively, stores them
	// in the sales member of s and computes and stores the
	// average, maximum, and minimum values
{
	double average = 0;
	double max = 0;
	double min = 0;
	double sum = 0;
	int n = 0;

 	//*  Main Code
	
	cout << "How many Quarters of Data do you have (4 Max)? ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << endl;
		cout << "Quarter #" << i+1 << ": ";
		cin >> s.sales[i];
		sum+=s.sales[i];
		if (i == 0)
		{
			max = s.sales[i];
			min = s.sales[i];
		}
		if (s.sales[i] > max)
		{
			max = s.sales[i];
		}
		if (s.sales[i] < min)
		{
			min = s.sales[i];
		}
	}
	
	if (n < 4)
	{
		for (int i = n; i < 4; i++)
		{
			s.sales[i] = 0;
		}
	}

	average = sum/n;
	s.average = average;
	s.max = max;
	s.min = min;

	//*  Program End
	
	return;

}
//********************************

void showSales(const Sales & s)
	// display all information in structure s
{
	//*  Variable Declaration



 	//*  Main Code
	cout << "Here are your Sales figures: " << endl;
	
	for (int i=0; i < 4; i++)
	{
		cout << "Quarter #" << i+1 << ": " << s.sales[i] << endl;
	}

	cout << endl;

	cout << "Average:\t" << s.average << endl;
	cout << "Min:\t\t" << s.min << endl;
	cout << "Max:\t\t" << s.max << endl;

	//*  Program End
	
	return;
}

}
