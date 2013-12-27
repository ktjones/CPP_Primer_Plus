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

const int SLEN = 30;



//********************************
//
//  Compound Type Declaration Section
//
//********************************

struct student
{
	char fullname [SLEN];
	char hobby[SLEN];
	int ooplevel;
};

//********************************
//
//  Function Declaration Section
//
//********************************

int getinfo(student pa[], int n);
void display1(student st);
void display2(const student * ps);
void display3(const student pa[], int n);

//********************************
//
//  Main Program Section
//
//********************************

int main(int nNumberofArgs, char* pszArgs[])
{
	//*  Variable Declaration


	//*  Main Code
	
	cout << "Enter class size: ";
	int class_size;
	cin >> class_size;
	
	while (cin.get() != '\n')
	{
		continue;
	}
	
	student * ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	
	for (int i = 0; i < entered; i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	
	display3(ptr_stu, entered);
	

	delete [] ptr_stu;
	
	cout << "Done\n";

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

int getinfo(student pa[], int n)
{
// getinfo() has two arguments: a pointer to the first element of
// an array of student structures and an int representing the
// number of elements of the array. The function solicits and
// stores data about students. It terminates input upon filling
// the array or upon encountering a blank line for the student
// name. The function returns the actual number of array elements
// filled.
	
	//*  Variable Declaration
	int i = 0;

	//*  Main Code

	for (i = 0; i < n; i++)
	{
		cout << "Student #" << i+1 << " Fullname: ";
		cin.get(pa[i].fullname,SLEN);
		cin.get();
		if(!cin)
		{
			cin.clear();
			break;
		}

		cout << "Student #" << i+1 << " Hobby: ";
		cin.get(pa[i].hobby,SLEN);
		cin.get();

		cout << "Student #" << i+1 << " OopLevel: ";
		cin >> pa[i].ooplevel;
		cin.get();
		
		cout << endl << endl;
	}



	//*  Program End

	return i;
}
//********************************

void display1(student st)
{
// display1() takes a student structure as an argument
// and displays its contents

	//*  Variable Declaration

	//*  Main Code
	
	cout << endl << endl;

	cout << "Student Fullname: " << st.fullname << endl;
	cout << "Student Hobby: " << st.hobby << endl;
	cout << "Student OopLevel: " << st.ooplevel << endl;

	cout << endl << endl;

	//*  Program End
	
	return;

}
//********************************


void display2(const student * ps)
{
// display2() takes the address of student structure as an
// argument and displays the structure’s contents

	//*  Variable Declaration

	//*  Main Code
	
	cout << endl << endl;

	cout << "Student Fullname: " << ps->fullname << endl;
	cout << "Student Hobby: " << ps->hobby << endl;
	cout << "Student OopLevel: " << ps->ooplevel << endl;

	cout << endl << endl;

	//*  Program End
	
	return;

}

void display3(const student pa[], int n)
// display3() takes the address of the first element of an array
// of student structures and the number of array elements as
// arguments and displays the contents of the structures
{
	//*  Variable Declaration

	//*  Main Code
	
	cout << endl << endl;

	for (int i = 0; i < n;i++)
	{
		cout << "Student Fullname: " << pa[i].fullname << endl;
		cout << "Student Hobby: " << pa[i].hobby << endl;
		cout << "Student OopLevel: " << pa[i].ooplevel << endl;
		cout << endl << endl;
	}

	//*  Program End
	
	return;
}