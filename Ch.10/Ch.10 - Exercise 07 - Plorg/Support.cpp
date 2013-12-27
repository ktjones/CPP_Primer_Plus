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
//**********************************************
plorg::plorg(char name[], int CI)
{
	
	strcpy(m_fname,name);
	m_CI = CI;
	cout << endl << endl;
	cout << "Oh great Plorg " << m_fname << ", you have been created.";
	cout << endl << endl;

}


//**********************************************
void plorg::plorgmood()
{
	
	cout << endl << endl;
	cout << "Oh Great Plorg, Your mood has changed?  To What (1-100)? ";
	cin >> m_CI;  
	cin.get();
	cout << endl << endl;

}


//**********************************************
void plorg::plorgshow()
{

	cout << endl << endl;
	cout << "Oh Great Plorg, Your request is heard!" << endl << endl;
	cout << "Your Name: " << m_fname << endl;
	cout << "m_CI: " << m_CI << endl;
	cout << endl << endl;

}
