// randwalk.cpp -- using the Vector class
// compile with the vect.cpp file

#include <iostream>
#include <cstdlib>      // rand(), srand() prototypes
#include <ctime>		// time() prototype
#include <fstream>
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
	
	ofstream fout;
	fout.open("results.txt");

    cout << "Enter target distance (q to quit): ";
    while (cin >> target)
    {
        cout << "Enter step length: ";
        if (!(cin >> dstep))
            break;

		fout << "Target Distance: " << target << "\tStep Length: " << dstep << endl;

        while (result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
			
			fout << steps << ": (x,y) = (" << step.xval() << ", " << step.yval() << ")" << endl;
 
			result = result + step;
            steps++;
        }
        fout << "After " << steps << " steps, the subject "
            "has the following location:\n";
        fout << result << endl;
        result.polar_mode();
        fout << " or\n" << result << endl;
        fout << "Average outward distance per step = "
            << result.magval()/steps << endl;
        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Enter target distance (q to quit): ";
    }
    cout << "Bye!\n";
/* keep window open
    cin.clear();
    while (cin.get() != '\n')
        continue;
    cin.get();
*/
    return 0; 
}
