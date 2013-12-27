// randwalk.cpp -- using the Vector class
// compile with the vect.cpp file
#include <iostream>
#include <cstdlib>      // rand(), srand() prototypes
#include <ctime>        // time() prototype
#include <fstream>
#include "vect.h"

int main()
{
    using namespace std;
    using VECTOR::Vector;
    
	srand(time(0));     // seed random-number generator
    
	double direction;
    Vector step;
    Vector result(0.0, 0.0);
	
    unsigned long steps = 0;
    double target = 500;
    double dstep = 3;
    
	double stepsmin = 0.0;
	double stepsmax = 0.0;
	double stepssum = 0.0;
	double stepsavg = 0.0;
	int NoTrial = 0;
	int NoTrialCount = 0;

	int iteration = 0;

	ofstream fout;
	fout.open("thewalk.txt");
	
	cout << "Enter the number of Trials: ";
	cin >> NoTrial;

	cout << endl << endl;
	cout << "The target distance will be: " << target << endl;
    cout << "The step length: "	<< dstep << endl;

	fout << endl << endl;
	fout << "The target distance will be: " << target << endl;
    fout << "The step length: "	<< dstep << endl;

	while (NoTrialCount < NoTrial)
	{
		// cout << "Enter step length: ";
		// if (!(cin >> dstep))
		//	 break;

		//fout << "Target Distance: " << target << ",\t Step Size: " << dstep << endl << endl;
		//fout << iteration << ": " << step << endl;

		while (result.magval() < target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;
			iteration++;
			fout << iteration << ": " << result << endl;
		}
		cout << endl << endl;
		cout << "After " << steps << " steps, the subject "
			"has the following location:\n";
		cout << result << endl;
		result.polar_mode();
		cout << " or\n" << result << endl;
		cout << "Average outward distance per step = "
			<< result.magval()/steps << endl;
		cout << endl << endl;

		fout << endl << endl;
		fout << "After " << steps << " steps, the subject "
			"has the following location:\n";
		fout << result << endl;
		result.polar_mode();
		fout << " or\n" << result << endl;
		fout << "Average outward distance per step = "
			<< result.magval()/steps << endl;
		fout << endl << endl;

		if(steps > stepsmax)
		{
			stepsmax = steps;
		}
		if(steps < stepsmin)
		{
			stepsmin = steps;
		}
		
		if (NoTrialCount == 0)
		{
			stepsmin = stepsmax = steps;
		}

		NoTrialCount++;
		stepssum += steps;
		iteration = 0;

		steps = 0;
		result.reset(0.0, 0.0);
		//cout << "Enter target distance: ";
		
	}
    
	stepsavg = stepssum/NoTrial;

	cout << endl << endl;
	cout << "Minimum Steps: " << stepsmin << endl;
	cout << "Maximum Steps: " << stepsmax << endl;
	cout << "Avg Steps    : " << stepsavg << endl;
	cout << endl << endl;

	fout << endl << endl;
	fout << "Minimum Steps: " << stepsmin << endl;
	fout << "Maximum Steps: " << stepsmax << endl;
	fout << "Avg Steps    : " << stepsavg << endl;
	fout << endl << endl;

	cout << endl << "Bye!\n";
	cout << endl << endl;
	system("PAUSE");

    return 0; 
}
