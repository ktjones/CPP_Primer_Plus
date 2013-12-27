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
//  Compound Type Declaration Section
//
//********************************

struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

//********************************
//
//  Function Declaration Section
//
//********************************

void boxdisplay1(box);
void boxdisplay2(box *);

//********************************
//
//  Global Variable Declaration
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
	box top = {"Box Boys Inc",10,10,10,1000};
	box side = {"Box Tops Rocks",20,20,20,0};

	//*  Main Code
	boxdisplay1(top);
	
	cout << endl << endl;
	
	boxdisplay2(&side);

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

void boxdisplay1(box mattress)
{
	//*  Variable Declaration
	
	//*  Main Code

	cout << "Maker: " << mattress.maker << endl;
	cout << "height: " << mattress.height << endl;
	cout << "width: " << mattress.width << endl;
	cout << "length: " << mattress.length << endl;
	cout << "volume: " << mattress.volume << endl;

	//*  Program End

	return;
}

void boxdisplay2(box * spring)
{
	//*  Variable Declaration
		
	//*  Main Code

	spring->volume = spring->height * spring->width * spring->length;

	cout << "Maker: " << spring->maker << endl;
	cout << "height: " << spring->height << endl;
	cout << "width: " << spring->width << endl;
	cout << "length: " << spring->length << endl;
	cout << "volume: " << spring->volume << endl;

	//*  Program End

	return;
}