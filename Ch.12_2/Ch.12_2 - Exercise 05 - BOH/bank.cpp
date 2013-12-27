// bank.cpp -- using the Queue interface
// compile with queue.cpp
#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()
#include "queue.h"
const int MIN_PER_HR = 60;

using namespace std;

bool newcustomer(double x); // is there a new customer?

int main()
{
    
// setting things up
    srand(time(0));    //  random initializing of rand()

    cout << "Case Study: Bank of Heather Automatic Teller\n";
    cout << "Enter maximum size of queue: ";
    int qs;
    cin >> qs;
    Queue line(qs);         // line queue holds up to qs people

    cout << "Enter the number of simulation hours: ";
    int hours;              //  hours of simulation
    cin >> hours;
    
	// simulation will run 1 cycle per minute
    long cyclelimit = MIN_PER_HR * hours; // # of cycles

    //cout << "Enter the average number of customers per hour: ";
    double perhour;    //  average # of arrival per hour
    // cin >> perhour;			
    double min_per_cust;    //  average time between arrivals
    // min_per_cust = MIN_PER_HR / perhour;

	int simcount;

    //Item temp;              //  new customer data
    long turnaways;     //  turned away by full queue
    long customers;     //  joined the queue
    long served;        //  served during the simulation
    long sum_line;      //  cumulative line length
    int wait_time;      //  time until autoteller is free
    long line_wait;     //  cumulative time in line
	double avg_wait;	//	average line wait


// running the simulation

	do
	{
		
		simcount++;

		perhour = std::rand() % 60 + 1;    //  random initializing of rand()
		min_per_cust = MIN_PER_HR / perhour;
		
		Item temp;              //  new customer data
		turnaways = 0;     //  turned away by full queue
		customers = 0;     //  joined the queue
		served = 0;        //  served during the simulation
		sum_line = 0;      //  cumulative line length
		wait_time = 0;      //  time until autoteller is free
		line_wait = 0;     //  cumulative time in line

		for (int cycle = 0; cycle < cyclelimit; cycle++)
		{
			if (newcustomer(min_per_cust))  // have newcomer
			{
				if (line.isfull())
					turnaways++;
				else
				{
					customers++;
					temp.set(cycle);    // cycle = time of arrival
					line.enqueue(temp); // add newcomer to line
				}
			}
			if (wait_time <= 0 && !line.isempty())
			{
				line.dequeue (temp);      // attend next customer
				wait_time = temp.ptime(); // for wait_time minutes
				line_wait += cycle - temp.when();
				served++;
			}
			if (wait_time > 0)
				wait_time--;
			sum_line += line.queuecount();
		}
	
		avg_wait = (double)line_wait/served;
	}
	while (avg_wait < 0.95 || avg_wait > 1.05);

// reporting results
    if (customers > 0)
    {
        cout << "customers accepted: " << customers << endl;
        cout << "  customers served: " << served << endl;
        cout << "         turnaways: " << turnaways << endl;
        cout << "average queue size: ";
        cout.precision(2);
        cout.setf(ios_base::fixed, ios_base::floatfield);
        cout << (double) sum_line / cyclelimit << endl;
        cout << " average wait time: " << (double) line_wait / served << " minutes\n";
		cout << " average customers per hour: " << sum_line/cyclelimit << endl;
	}
    else
        cout << "No customers!\n";
    cout << "Done!\n";
    
	system("PAUSE");
    return 0;
}

//  x = average time, in minutes, between customers
//  return value is true if customer shows up this minute
bool newcustomer(double x)
{
    return (rand() * x / RAND_MAX < 1); 
}
