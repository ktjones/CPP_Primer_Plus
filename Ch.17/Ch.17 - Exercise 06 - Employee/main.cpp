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
char menu();
void initialRun(ofstream & fo, const string & fn, vector<abstr_emp *> & v);
void subsequentRun(ofstream & fo, ifstream & fi, const string & fn, vector<abstr_emp *> & v);
void addEmployee(char etype, vector<abstr_emp *> & v, ofstream & fo);
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
	ifstream fin;
	ofstream fout;

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
				initialRun(fout, filename, emp);
				break;
			case 'B':	
				cout << endl;
				cout << "You have chosen to add data to an existing file" << endl;
				cout << endl;
				system("PAUSE");
				cout << endl;
				subsequentRun(fout, fin, filename, emp);
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
//	Function #1 - Main Menu Selection
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
//	Function #2 - Add Menu Selection
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
//	Function #3 - Initial Data Run
//
//********************************

void initialRun(ofstream & fo, const string & fn, vector<abstr_emp *> & v)
{

	//*  Variable Declaration
	char choice = '\0';
	
	//*  Main Code
	v.clear();

	// Prepare the file for writing
	fo.open(fn);
	
	if (!fo.is_open())
	{

		cerr << "Could Not Open " << fn << endl;
		fo.clear();
		return;

	}
	
	// Data Collection Sequence
	while (choice != 'Q')
	{

		choice = menu();
		
		if (choice != 'Q')
		{
			cout << endl;
			addEmployee(choice, v, fo);
		}
		
	}

	fo.clear();
	fo.close();

	// Display Data Entries
	showEmployee(v);

	//*  Program End
	
	cout << endl << endl;
	system("PAUSE");

	return;

}

//********************************
//
//	Function #3 - Subsequent Data Runs
//
//********************************

void subsequentRun(ofstream & fo, ifstream & fi, const string & fn, vector<abstr_emp *> & v)
{
	//*  Variable Declaration
	char choice = '\0';
	
	//*  Main Code
	v.clear();

	// Prepare the file for writing
	fo.open(fn, ios_base::app);

	if (!fo.is_open())
	{

		cerr << "Could Not Open " << fn << endl;
		fo.clear();
		return;

	}

	// Data Collection Sequence
	while (choice != 'Q')
	{

		choice = menu();

		if (choice != 'Q')
		{
			cout << endl;
			addEmployee(choice, v, fo);
		}

	}

	fo.clear();
	fo.close();

	// Display Data Entries
	showEmployee(v);

	//*  Program End

	cout << endl << endl;
	system("PAUSE");

	return;

}

//********************************
//
//	Function #3 - Add Employee Data
//
//********************************

void addEmployee(char etype, vector<abstr_emp *> & v, ofstream & fo)
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
			fo << "employee" << endl;
			tempe->WriteAll(fo);
			v.push_back(tempe);
			break;
		}
		case 'B':	//manager
		{
			manager * tempm = new manager();
			tempm->SetAll();
			fo << "manager" << endl;
			tempm->WriteAll(fo);
			v.push_back(tempm);
			break;
		}
		case 'C':	//fink
		{
			fink * tempf = new fink();
			tempf->SetAll();
			fo << "fink" << endl;
			tempf->WriteAll(fo);
			v.push_back(tempf);
			break;
		}
		case 'D':	//high fink
		{
			highfink * temphf = new highfink();
			temphf->SetAll();
			fo << "highfink" << endl;
			temphf->WriteAll(fo);
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