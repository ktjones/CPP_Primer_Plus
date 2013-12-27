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
#include <cstring>
#include "header.h"

using namespace std;

//***************************************************************************************************
//
//  Support Program Section
//
//***************************************************************************************************
Plorg::Plorg()
{

	char pname[20];
	char d_name[20] = "Plorga";
	
	cout << endl;
	cout << "Please enter your Plorg's name (no more than 19 leters, please.).  If you want the default name enter 'd': ";
	cin.getline(pname,19);
	
	if(pname[0] == 'd')
	{
		strcpy(m_name,d_name);
	}
	else
	{
		strcpy(m_name,pname);
	}

	m_CI = 50.0;

}

void Plorg::CI_Mod()
{

	int New_CI;
	
	cout << endl;
	cout << "Please enter a new CI: ";
	cin >> New_CI;

	m_CI = New_CI;

}

void Plorg::Plorg_Show()
{

	cout << endl;
	cout << "If you show me your Plorg I will show you mine!" << endl;
	cout << "Plorg Name: " << m_name << endl;
	cout << "Plorg CI  : " << m_CI << endl;
	cout << endl;
}
