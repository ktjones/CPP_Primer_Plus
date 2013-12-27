// stone.cpp -- user-defined conversions
// compile with stonewt.cpp
#include <iostream>
using std::cout;
#include "stonewt1.h"
void display(const Stonewt & st, int n);
int main()
{
    Stonewt incognito = 275; // uses constructor to initialize
    Stonewt wolfe(285.7);    // same as Stonewt wolfe = 285.7;
    Stonewt taft(21, 8);

    cout << "The celebrity weighed ";
    cout << incognito << std::endl;
    cout << "The detective weighed ";
    cout << wolfe << std::endl;
    cout << "The President weighed ";
    cout << taft << std::endl;
    incognito = 276.8;      // uses constructor for conversion
    taft = 325;             // same as taft = Stonewt(325);
    cout << "After dinner, the celebrity weighed ";
    cout << incognito << std::endl;
    cout << "After dinner, the President weighed ";
    cout << taft << std::endl;
    display(taft, 2);
    cout << "The wrestler weighed even more.\n";
    display(422, 2);
    cout << "No stone left unearned\n";
    // std::cin.get();
    
	cout << std::endl << std::endl;
	system("PAUSE");

	return 0;
}

void display(const Stonewt & st, int n)
{
    for (int i = 0; i < n; i++)
    {
        //cout << "Wow! ";
        //st.show_stn();

		cout << "Wow! " << std::endl;
        cout << double(st) << std::endl;  //the original displayed as stone/lbs, not just pounds.

    }
}
