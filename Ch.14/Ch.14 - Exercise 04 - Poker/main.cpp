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

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <fstream>
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





//***************************************************************************************************
//
//  Main Program Section
//
//***************************************************************************************************

int main(int nNumberofArgs, char* pszArgs[])
{
	//*  Variable Declaration
	Person pMarty = Person("Marty", "jones");
	GunSlinger gsBob = GunSlinger(100, 2.0, "Bob", "Jones");
	PokerPlayer ppJim = PokerPlayer(-1, "Jim", "Jones");
	BadDude bdTodd = BadDude(-1, 1000, 1.5, "Todd", "Jones");

	//*  Main Code

	pMarty.Show();
	
	gsBob.Draw();
	gsBob.Show();
	
	ppJim.Draw();
	ppJim.Show();
	
	bdTodd.GDraw();
	bdTodd.CDraw();
	bdTodd.Show();

	Person * pzpMarty = &pMarty;
	pzpMarty->Show();

	pzpMarty = &gsBob;
	pzpMarty->Show();



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
//	Function #1
//

    //*  Variable Declaration

	//*  Main Code

	//*  Program End

//********************************
