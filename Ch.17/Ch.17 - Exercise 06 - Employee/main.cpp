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

char mainMenu();
void initialRun(ofstream & fo, const string & fn);
void subsequentRun();

char menu();
void createFile(ofstream & fi, ifstream & fo, const string & fn);
void addEmployee(char etype, vector<abstr_emp *> & v);
void showEmployee(vector<abstr_emp *> & v);


//***************************************************************************************************
//
//  Main Program Section
//
//***************************************************************************************************

int main(int nNumberofArgs, char* pszArgs[])
{
	//*  Standard Variable Declaration
	char menuchoice = '\0';
	
	string filename = "employee.txt";

	//*  Object Declaration
	vector<abstr_emp *> emp;
	
	ofstream fin;
	ifstream fout;

	fin.open(filename);
	fout.open(filename);

	//*  Main Code
	
	while (menuchoice != 'Q')
	{

		menuchoice = mainMenu();
				
		switch (menuchoice)
		{

			case 'A':
				cout << endl;
				cout << "You have chosen Initial Data Creation!" << endl;
				cout << "(warning, this will erase anything previously done!)" << endl;
				
				cout << endl;
				system("PAUSE");
				cout << endl;

				initialRun();
				break;
			case 'B':	
				cout << endl;
				cout << "You have chosen to add data to an existing file" << endl;
				subsequentRun();
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
//	Function #? - Main Menu Selection
//
//********************************

char mainMenu()
{

	//*  Variable Declaration
	char input = '\0';

	//*  Main Code
	system("CLS");
	
	cout << "Welcome to the main menu.  Please select one of the following: " << endl;

	cout << "a) Initial Data Creation" << endl;
	cout << "b) Add New Data" << endl;
	cout << "q) Exit program" << endl;

	cout << endl;
	cout << "What is your choice: ";
	cin >> input;

	input = tolower(input);

	if ((input < 'a' || input > 'b') && input != 'q')
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

void initialRun(ofstream & fo, const string & fn)
{

	//*  Variable Declaration
	char choice = '\0';
	vector<abstr_emp *> empin;

	//*  Main Code

	// Data Collection Sequence
	while (choice != 'Q')
	{

		choice = menu();
		
		if (choice != 'Q')
		{
			cout << endl;
			addEmployee(choice, empin);
		}
		
	}

	// Display Data Entries
	showEmployee(empin);

	// Write Data to New File
	fo.open(fn);

	if (!fo.is_open())
	{

		cerr << "Could Not Open " << fn << endl;
		fo.clear();
		
	}
	else
	{

		

	}

	//*  Program End
	
	return;

}

//********************************
//
//	Function #3
//
//********************************

void subsequentRun()
{

	//*  Variable Declaration

	//*  Main Code

	//*  Program End



}

//********************************
//
//	Function #?
//
//********************************

void createFile(ofstream & fi, ifstream & fo, const string & fn)
{

	//*  Variable Declaration



	//*  Main Code
	if (fi.is_open() || fo.is_open())
	{
		
		fi.clear();
		fo.clear();
		fi.close();
		fo.close();
		fi.open(fn);
		fo.open(fn);
		fi.close();
		fo.close();

	}
	else
	{

		fi.open(fn);
		fi.close();
		fo.open(fn);
		fo.close();

	}

	cout << endl << endl;
	cout << "The new file named " << fn << " has been created!";
	
	//*  Program End

	return;

}

//********************************
//
//	Function #2 - Menu Selection
//
//********************************

char menu()
{

	//*  Variable Declaration
	char input = '\0';
	
	//*  Main Code
	system("CLS");
	cout << "Add data Menu Choices: " << endl << endl;
	
	cout << "a) Add a new EMPLOYEE entry" << endl;
	cout << "b) Add a new MANAGER entry" << endl;
	cout << "c) Add a new FINK entry" << endl;
	cout << "d) Add a new HIGH FINK entry" << endl;
	cout << "q) Quit data entry and return to main menu" << endl;
	
	cout << endl;
	cout << "What is your choice: ";
	cin >> input;

	input = tolower(input);

	if ((input < 'a' || input > 'd') && input != 'q')
	{
		input = 'q';
	}

	cin.get();

	//*  Program End
	return toupper(input);

}

//********************************
//
//	Function #3
//
//********************************

void addEmployee(char etype, vector<abstr_emp *> & v)
{

	//*  Variable Declaration
	string fn;		//first name	/ all types
	string ln;		//last name		/ all types
	string j;		//job			/ all types
	string rpo;		//reportsto		/ fink & highfink types
	int ico = 0;	//inchargeof	/ manager & highfink types
	
	//*  Main Code
	
	// Enter basic information for all employees
	
	// Enter the specific information for the title chosen
	switch (etype)
	{

		case 'A':	//employee
		{
			employee * tempe = new employee();
			tempe->SetAll();
			v.push_back(tempe);
			break;
		}
		case 'B':	//manager
		{
			manager * tempm = new manager();
			tempm->SetAll();
			v.push_back(tempm);
			break;
		}
		case 'C':	//fink
		{
			fink * tempf = new fink();
			tempf->SetAll();
			v.push_back(tempf);
			break;
		}
		case 'D':	//high fink
		{
			highfink * temphf = new highfink();
			temphf->SetAll();
			v.push_back(temphf);
			break;
		}
	}
	
	//*  Program End
	return;

}

//********************************
//
//	Function #4 - Show Vector Data
//
//********************************

void showEmployee(vector<abstr_emp *> & v)
{

	//*  Variable Declaration
	

	//*  Main Code

	for (auto x : v)
	{

		x->ShowAll();
		cout << endl << endl;

	}

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