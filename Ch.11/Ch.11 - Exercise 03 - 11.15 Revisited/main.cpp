// randwalk.cpp -- using the Vector class
// compile with the vect.cpp file
#include <iostream>
#include <cstdlib>      // rand(), srand() prototypes
#include <ctime>        // time() prototype
#include "header.h"
int main()
{
    using namespace std;
    using VECTOR::Vector;
    
	srand(time(0));     // seed random-number generator
    
	double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    
	int maxsteps = 0.0;
	int minsteps = 0.0;
	int trialcount = 0.0;
	double sumsteps = 0.0;
	double avgsteps = 0.0;
	
	cout << "Enter target distance (q to quit): ";
    while (cin >> target)
    {
        cout << "Enter step length: ";
        if (!(cin >> dstep))
            break;

        while (result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps++;
        }
        cout << "After " << steps << " steps, the subject "
            "has the following location:\n";
        cout << result << endl;
        result.polar_mode();
        cout << " or\n" << result << endl;
        cout << "Average outward distance per step = "
            << result.magval()/steps << endl;
        
		if (trialcount == 0.0)
		{
			minsteps = maxsteps = steps;
		}
		else
		{
			if (steps > maxsteps)
			{
				maxsteps = steps;
			}
			else if (steps < minsteps)
			{
				minsteps = steps;
			}
		}
		sumsteps = sumsteps + steps;
		trialcount++;
		steps = 0;
        result.reset(0.0, 0.0);
        cout << "Enter target distance (q to quit): ";
    }
    
	avgsteps = sumsteps/trialcount;
	cout << endl << endl;
	cout << "Final Results are as follows: " << endl;
	cout << "Max # of Steps: " << maxsteps << endl;
	cout << "Min # of Steps: " << minsteps << endl;
	cout << "Average # of Steps per Trial: " <<  avgsteps << endl;

	cout << endl << endl;	
	cout << "Bye!\n";

	system("PAUSE");

/* keep window open
    cin.clear();
    while (cin.get() != '\n')
        continue;
    cin.get();
*/
    return 0; 
}
