//*******************************
//
//  C++ Template Program - Support Files
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
//  Global Variable Declaration
//	- Outside of Name Space
//
//********************************



//********************************
//
//  Compound Type Declaration Section 
//	- Outside of Name Space
//
//********************************


//********************************
//
//  Class Definitions
//	- Outside of Name Space
//
//********************************



//********************************
//
//  Function Definition
//	- Outside of Name Space
//
//********************************

    //*  Variable Declaration

	//*  Main Code

	//*  Program End

//********************************

//******************************************************************************************

//********************************
//
//  Name Space Declarations & Definitions
//
//********************************

using namespace std;

namespace SALES
{

//********************************
//
//  Global or Name Space Variable Declaration
//	- Inside of Name Space
//
//********************************



//********************************
//
//  Compound Type Declaration Section
//	- Inside of Name Space
//
//********************************



//********************************
//
//  Function Definition
//	- Inside of Name Space
//
//********************************

    //*  Variable Declaration

	//*  Main Code

	//*  Program End

//********************************

Sales::Sales(double qsales[], int n)
	// copies the lesser of 4 or n items from the array ar
	// to the sales member of s and computes and stores the
	// average, maximum, and minimum values of the entered items;
	// remaining elements of sales, if any, set to 0
{
    //*  Variable Declaration
	double sum = 0;

 	//*  Main Code
	
	m_max = qsales[0];
	m_min = qsales[0];

	if (n < 4)
	{
		for (int i = 0; i < n; i++)
		{
			m_sales[i] = qsales[i];
			sum+=qsales[i];
			if (qsales[i] > m_max)
			{
				m_max = qsales[i];
			}
			if (qsales[i] < m_min)
			{
				m_min = qsales[i];
			}
		}
		
		m_average = sum/n;
		
		for (int i = n; i < 4; i++)
		{
			m_sales[i] = 0;
		}
	}
	else
	{	
		for (int i = 0; i < 4; i++)
		{
			m_sales[i] = qsales[i];
			sum+=qsales[i];
			if (qsales[i] > m_max)
			{
				m_max = qsales[i];
			}
			if (qsales[i] < m_min)
			{
				m_min = qsales[i];
			}
		}
		m_average = sum/4;
	}
	
	//*  Program End
	
	return;

}
//********************************

Sales::Sales()
	// gathers sales for 4 quarters interactively, stores them
	// in the sales member of s and computes and stores the
	// average, maximum, and minimum values
{
	//* Variable Declarations
	int n = 0;
	double sum = 0;

 	//*  Main Code
	
	cout << "How many Quarters of Data do you have (4 Max)? ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << endl;
		cout << "Quarter #" << i+1 << ": ";
		cin >> m_sales[i];
		sum+=m_sales[i];
		if (i == 1)
		{
			m_max = m_sales[i];
			m_min = m_sales[i];
		}
		else
		{
			if (m_sales[i] > m_max)
			{
				m_max = m_sales[i];
			}
			if (m_sales[i] < m_min)
			{
				m_min = m_sales[i];
			}
		}
		
	}
	
	if (n < 4)
	{
		for (int i = n; i < 4; i++)
		{
			m_sales[i] = 0;
		}
	}

	for (int i = 0; i < 4; i++)
	{
		cout << m_sales[i] << endl;
	}

	m_average = sum/n;

	//*  Program End
	
	return;

}
//********************************

void Sales::setSales()
	// gathers sales for 4 quarters interactively, stores them
	// in the sales member of s and computes and stores the
	// average, maximum, and minimum values
{
	//* Variable Declarations
	int n = 0;
	double sum = 0;
	double s_array[4];

	//*  Main Code
	
	cout << "How many Quarters of Data do you have (4 Max)? ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << endl;
		cout << "Quarter #" << i+1 << ": ";
		cin >> s_array[i];
		sum+=s_array[i];
	}
	
	if (n < 4)
	{
		for (int i = n; i < 4; i++)
		{
			s_array[i] = 0;
		}
	}

	*this = Sales(s_array, n);

	//*  Program End
	
	return;

}

//********************************

void Sales::showSales()
	// display all information in structure s
{
	//*  Variable Declaration

 	//*  Main Code
	cout << "Here are your Sales figures: " << endl;
	
	for (int i=0; i < 4; i++)
	{
		cout << "Quarter #" << i+1 << ": " << m_sales[i] << endl;
	}

	cout << endl;

	cout << "Average:\t" << m_average << endl;
	cout << "Min:\t\t" << m_min << endl;
	cout << "Max:\t\t" << m_max << endl;

	//*  Program End
	
	return;
}

//********************************
//
//  Class Definitions
//	- Inside of Name Space
//
//********************************

}