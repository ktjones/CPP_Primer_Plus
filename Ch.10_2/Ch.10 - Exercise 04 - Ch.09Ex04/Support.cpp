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
#include "header.h" 

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

	Sales::Sales(const double ar[], int n)
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
				sales[i] = ar[i];
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
				sales[i] = 0;
			}
		}
		else
		{	
			for (int i = 0; i < 4; i++)
			{
				sales[i] = ar[i];
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
	
		m_average = average;
		m_max = max;
		m_min = min;

		//*  Program End
	
		return;

	}
	//********************************

	void Sales::setSales()
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
			cin >> sales[i];
			sum+=sales[i];
			if (i == 0)
			{
				max = sales[i];
				min = sales[i];
			}
			if (sales[i] > max)
			{
				max = sales[i];
			}
			if (sales[i] < min)
			{
				min = sales[i];
			}
		}
	
		if (n < 4)
		{
			for (int i = n; i < 4; i++)
			{
				sales[i] = 0;
			}
		}

		average = sum/n;
		m_average = average;
		m_max = max;
		m_min = min;

		//*  Program End
	
		return;

	}
	//********************************

	void Sales::showSales() const
		// display all information in structure s
	{
		//*  Variable Declaration



 		//*  Main Code
		cout << "Here are your Sales figures: " << endl;
	
		for (int i=0; i < 4; i++)
		{
			cout << "Quarter #" << i+1 << ": " << sales[i] << endl;
		}

		cout << endl;

		cout << "Average:\t" << m_average << endl;
		cout << "Min:\t\t" << m_min << endl;
		cout << "Max:\t\t" << m_max << endl;

		//*  Program End
	
		return;
	}

}
