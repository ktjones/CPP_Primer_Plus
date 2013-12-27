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

#include <iostream>
#include <string>


using namespace std;

//******************************** 
//
//  Global Variable Declaration
//
//********************************

const int Seasons = 4;
const char * Snames[Seasons] = {"Spring", "Summer", "Fall", "Winter"};

//********************************
//
//  Compound Type Declaration Section
//
//********************************

struct money
{
	double exp;
};


//********************************
//
//  Function Declaration Section
//
//********************************

void fill(money *);
void show(money *);


//********************************
//
//  Main Program Section
//
//********************************

int main(int nNumberofArgs, char* pszArgs[])
{
	//*  Variable Declaration

	money expenses[4];

	//*  Main Code

	fill(expenses);
    show(expenses);
    // cin.get();
    // cin.get();

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

void fill(money * pa)
{
    for (int i = 0; i < Seasons; i++)
    {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> pa[i].exp;
    }
}


void show(money * da)
{
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": $" << da[i].exp << '\n';
        total += da[i].exp;
    }
    cout << "Total: $" << total << '\n';
}
