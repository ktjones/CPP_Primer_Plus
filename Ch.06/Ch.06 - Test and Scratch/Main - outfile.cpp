// fout.cpp -- writing to a file
#include <iostream>
#include <fstream>                  // for file I/O

int main()
{
    using namespace std;

    char automobile[50];
    int year;
    double a_price;
    double d_price;

    ofstream fout;               // create object for output
    fout.open("carinfo.txt");    // associate with a file

    cout << "Enter the make and model of automobile: ";
    cin.getline(automobile, 50);
    cout << "Enter the model year: ";
    cin >> year;
    cout << "Enter the original asking price: ";
    cin >> a_price;
    d_price = 0.913 * a_price;

// display information on screen with cout

    cout << fixed;
    cout.precision(2);
    cout.setf(ios_base::showpoint);
    cout << "Make and model: " << automobile << endl;
    cout << "Year: " << year << endl;
    cout << "Was asking $" << a_price << endl;
    cout << "Now asking $" << d_price << endl;

// now do exact same things using fout instead of cout

    fout << fixed;
    fout.precision(2);
    fout.setf(ios_base::showpoint);
    fout << "Make and model: " << automobile << endl;
    fout << "Year: " << year << endl;
    fout << "Was asking $" << a_price << endl;
    fout << "Now asking $" << d_price << endl;
    
    fout.close();                // done with file
    // cin.get();
    // cin.get();
    
	system("PAUSE");
	return 0;
}
