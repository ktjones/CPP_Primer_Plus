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
#include <new>
#include <cstring>

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

struct chaff
{
	char dross[20];
	int slag;
};


//********************************
//
//  Function Declaration Section
//
//********************************





//********************************
//
//  Main Program Section
//
//********************************

int main(int nNumberofArgs, char* pszArgs[])
{
	//*  Variable Declaration
	char buffer1[500];
	char * buffer2 = new char[500];
	char name1[20] = "todd jones";
	char name2[20] = "bob smith";
	char name3[20] = "jim martinez";
	char name4[20] = "juan ramirez";
	
	//*  Main Code
	chaff * ptr1;
	chaff * ptr2;
	
	ptr1 = new (buffer1) chaff[2];
	ptr2 = new (buffer2) chaff[2];

	//Option #1 - Using a static array as the buffer
	
	strcpy(ptr1[0].dross,name1);
	ptr1[0].slag = 5;

	strcpy(ptr1[1].dross,name2);
	ptr1[1].slag = 5;

	cout << "Chaff#1 Dross: " << ptr1[0].dross << endl;
	cout << "chaff#1 Slag: " << ptr1[0].slag << endl;

	cout << endl;

	cout << "Chaff#2 Dross: " << ptr1[1].dross << endl;
	cout << "chaff#2 Slag: " << ptr1[1].slag << endl;

	cout << endl << endl;

	//Option #2 - Using the heap as a buffer

	strcpy(ptr2[0].dross,name3);
	ptr2[0].slag = 5;

	strcpy(ptr2[1].dross,name4);
	ptr2[1].slag = 5;

	cout << "Chaff#3 Dross: " << ptr2[0].dross << endl;
	cout << "chaff#3 Slag: " << ptr2[0].slag << endl;

	cout << endl;

	cout << "Chaff#4 Dross: " << ptr2[1].dross << endl;
	cout << "chaff#4 Slag: " << ptr2[1].slag << endl;


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
