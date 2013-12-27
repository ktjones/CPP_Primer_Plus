//error4.cpp – using exception classes
#include <iostream>
#include <cmath> // or math.h, unix users may need -lm flag
#include <string>
#include "exc_mean.h"

// function prototypes
double hmean(double a, double b);
double gmean(double a, double b);

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    
    double x, y, z;

    cout << "Enter two numbers: ";
    while (cin >> x >> y)
    {
        try 
		{                  // start of try block
            z = hmean(x,y);
            cout << "Harmonic mean of " << x << " and " << y
                << " is " << z << endl;
            cout << "Geometric mean of " << x << " and " << y
                << " is " << gmean(x,y) << endl;
            cout << "Enter next set of numbers <q to quit>: ";
        }// end of try block
        
		/*
		catch (bad_hmean & bg)    // start of catch block
        {
            cout << bg.what() << endl;
			bg.mesg();
            cout << "Try again.\n";
            continue;
        }
		*/

        catch (base_bad_mean & hg) 
        {
            
			cout << hg.what() << endl;
			hg.mesg();
			cout << "Sorry, you don't get to play any more.\n";
            break;
        } // end of catch block
    }
    cout << "Bye!\n";
    // cin.get();
    // cin.get();
    
	cout << endl << endl;
	system("PAUSE");

	return 0;
}

double hmean(double a, double b)
{
    if (a == -b)
        throw base_bad_mean("This is the hmean function",a,b);
    return 2.0 * a * b / (a + b);
}

double gmean(double a, double b)
{
    if (a < 0 || b < 0)
        throw base_bad_mean("This is the gmean function",a,b);
    return std::sqrt(a * b); 
}
