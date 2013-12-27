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




//********************************
//
//  Global Variable Declaration
//
//********************************

const int Max = 5;


//********************************
//
//  Function Declaration Section
//
//********************************

double * fill_array(double ar[], double arend[]);
void show_array(const double ar[], double * arend);  // don't change data
void revalue(double r, double ar[], double * arend);


//********************************
//
//  Main Program Section
//
//********************************

int main(int nNumberofArgs, char* pszArgs[])
{
	//*  Variable Declaration
	
	using namespace std;
    double properties[Max];

	//*  Main Code
	
	double * size = fill_array(properties, properties+Max);
    show_array(properties, size);
    
	if (size > properties)
    {
        cout << "Enter revaluation factor: ";
        double factor;
        while (!(cin >> factor))    // bad input
        {
            cin.clear();
            while (cin.get() != '\n')
			{
				continue;
			}
           cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, properties, size);
        show_array(properties, size);
    }
    
	cout << "Done.\n";

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

double * fill_array(double ar[], double arend[])
{
    using namespace std;
    double temp;
    int i = 0;
    
	while (ar < arend)
	{
	    cout << "Enter value #" << (i + 1) << ": ";
        cin >> temp;
        if (!cin)    // bad input
        {
           cin.clear();
           while (cin.get() != '\n')
		   {
			   continue;
		   }
		   cout << "Bad input; input process terminated.\n";
           break;
        }
        else if (temp < 0)     // signal to terminate
		{
			break;
		}

        *ar = temp;
		i++;
		ar++;
	}
    
	return ar;
}

// the following function can use, but not alter,
// the array whose address is ar
void show_array(const double ar[], double * arend)
{
    using namespace std;
    int i = 0;
	
	while (ar < arend)
	{
	    cout << "Property #" << (i + 1) << ": $";
        cout << *ar << endl;
		i++;
		ar++;
    }
}

// multiplies each element of ar[] by r
void revalue(double r, double ar[], double * arend)
{
    while (ar < arend)
	{
		*ar *= r;
		ar++;
	}
}