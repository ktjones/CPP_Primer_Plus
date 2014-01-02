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

#include <iostream>
#include <fstream>
#include <cctype>
#include <vector>
#include "header.h"

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

char menu();
void createEmployee(char etype, vector<abstr_emp *> & v);



//***************************************************************************************************
//
//  Main Program Section
//
//***************************************************************************************************

int main(int nNumberofArgs, char* pszArgs[])
{
	//*  Standard Variable Declaration
	char menuchoice = '\0';



	//*  Object Declaration
	vector<abstr_emp *> emp;
	fstream finout;
	finout.open("employee.txt", ios_base::in | ios_base::out);


	//*  Main Code
	
	while (menuchoice != 'Q')
	{

		menuchoice = menu();

		switch (menuchoice)
		{

			case 'A':	
				cout << endl;
				cout << "You have chosen to create an EMPLOYEE!" << endl;
				createEmployee(menuchoice, emp);
				break;
			case 'B':	
				cout << endl;
				cout << "You have chosen to create an MANAGER!" << endl;
				createEmployee(menuchoice, emp);
				break;
			case 'C': 
				cout << endl;
				cout << "You have chosen to create an FINK!" << endl;
				createEmployee(menuchoice, emp);
				break;
			case 'D': 
				cout << endl;
				cout << "You have chosen to create an HIGH FINK!" << endl;
				createEmployee(menuchoice, emp);
				break;
			case 'E': 
				cout << "Case E" << endl << endl;
				break;
			case 'Q': 
				cout << "Quitter" << endl << endl;
				continue;

		}


		
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
//	Function #1 - Menu Selection
//
//********************************

char menu()
{

	//*  Variable Declaration
	char input = '\0';
	
	//*  Main Code
	system("CLS");
	cout << "Here are your menu choices: " << endl << endl;
	
	cout << "a) Add a new EMPLOYEE entry" << endl;
	cout << "b) Add a new MANAGER entry" << endl;
	cout << "c) Add a new FINK entry" << endl;
	cout << "d) Add a new HIGH FINK entry" << endl;
	cout << "e) Display all entries" << endl;
	cout << "q) quit" << endl;
	
	cout << endl;
	cout << "What is your choice: ";
	cin >> input;

	input = tolower(input);

	if ((input < 'a' || input > 'e') && input != 'q')
	{
		input = 'q';
	}

	cin.get();

	//*  Program End
	return toupper(input);

}

//********************************
//
//	Function #2
//
//********************************

void createEmployee(char etype, vector<abstr_emp *> & v)
{

	//*  Variable Declaration
	string fn;		//first name	/ all types
	string ln;		//last name		/ all types
	string j;		//job			/ all types
	string rpo;		//reportsto		/ fink & highfink types
	int ico = 0;	//inchargeof	/ manager & highfink types
	
	//abstr_emp * temp = nullptr;	

	//*  Main Code
	
	// Enter basic information for all employees
	cout << "First Name: ";
	getline(cin, fn);
	cout << "Last Name: ";
	getline(cin, ln);
	cout << "Job Name: ";
	getline(cin, j);
	
	// Enter the specific information for the title chosen
	switch (etype)
	{

		case 'A':	//employee
		{
			employee * tempe = new employee(fn, ln, j);
			v.push_back(tempe);
			break;
		}
		case 'B':	//manager
		{
			cout << "In charge of how many people: ";
			cin >> ico;
			manager * tempm = new manager(fn, ln, j, ico);
			v.push_back(tempm);
			break;
		}
		case 'C':	//fink
		{
			cout << "Reports To: ";
			getline(cin, rpo);
			fink * tempf = new fink(fn, ln, j, rpo);
			v.push_back(tempf);
			break;
		}
		case 'D':	//high fink
		{
			cout << "Reports To: ";
			getline(cin, rpo);
			cout << "In charge of how many people: ";
			cin >> ico;
			highfink * temphf = new highfink(fn, ln, j, rpo, ico);
			v.push_back(temphf);
			break;
		}
	}
	
	// Push the info into the vector
	//v.push_back(temp);
	
	//*  Program End
	return;

}




//********************************
//
//	Function #?
//
//********************************

//*  Variable Declaration

//*  Main Code

//*  Program End

//********************************