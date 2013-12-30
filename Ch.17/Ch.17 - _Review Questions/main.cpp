//*******************************
//
//  Chapter Review Questions
//
//*******************************

// Example

/* #. 


**************************************/

/* 1. 

The iostream file allows for input and output to a program by creating and managing streams and buffers, and providing ways to link the streams/buffers
between the program and the source.  iostream also creates standard objects (cin, cout, cerr, clog) to handle these interactions.

**************************************/

/* 2. 

The computer stores the data in binary format, as opposed to the decimal format provided by the user input.  Therefore, the data needs to be converted to
the format stored by the computer.  Specifically, the input supplied isn't really 121, but rather the individual characters 1, 2, & 1, which also need to
be translated in to the binary value representation of 121.

**************************************/

/* 3. 

Standard output and Standard Error both send data to the standard output device.  The Standard Output can be redirected, however, whereas the Standard Error cannot.


**************************************/

/* 4.

The ostream class overloads the << operator to handle the built in types.

**************************************/

/* 5. 

The overloaded ostream operator<< method returns an ostream &, which allows for overloading.

**************************************/

/* 6. 

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int number;

	cin >> number;

	cout << showbase << setw(15) << dec << number << setw(15) << oct << number << setw(15) << hex << number << endl;

	cout << endl << endl;
	system("PAUSE");

	return 0;
}

**************************************/

/* 7. 

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	string name;
	float wages = 0;
	float hours = 0;

	cout << "Enter your name: ";
	getline(cin, name);

	cout << "Enter your hourly wages: ";
	cin >> wages;

	cout << "Enter the number of hours worked: ";
	cin >> hours;

	cout << "First Format:" << endl;
	cout.precision(2);
	cout << fixed << setw(25) << name << ": $" << setw(8) << wages << ": ";
	cout.precision(1);
	cout << setw(4) << hours << endl;

	cout << endl;
	
	cout << "Second Format:";
	cout << endl;

	cout << fixed << left << setw(25) << name << ": $" << setw(8) << wages << ": ";
	cout.precision(1);
	cout << setw(4) << hours << endl;

	cout << endl << endl;
	system("PAUSE");

	return 0;
}


**************************************/

/* 8. 

a.	5
b.	9

#include <iostream>
int main()
{

	using namespace std;

	char ch;
	int ct1 = 0;

	cin >> ch;
	while (ch != 'q')
	{

		ct1++;
		cin >> ch;

	}

	int ct2 = 0;

	cin.get(ch);
	while (ch != 'q')
	{

		ct2++;
		cin.get(ch);

	}

	cout << "ct1 = " << ct1 << "; ct2 = " << ct2 << "\n";

	cout << endl << endl;
	system("PAUSE");

	return 0;

}

**************************************/

/* 9. 

cin.get() reads each character and continues to do so until the newline is reached.
cin.ignore reads and discards until 80 characters or the new line is reached, whichever comes first.

**************************************/
