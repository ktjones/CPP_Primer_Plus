// stone.cpp -- user-defined conversions
// compile with stonewt.cpp
#include <iostream>
#include "header.h"

using std::cout;
using std::cin;
using std::endl;

void display(const Stonewt & st, int n);

int main()
{
	Stonewt rocks[6] = {Stonewt(10),Stonewt(200),Stonewt(3000)};
	Stonewt rockwt = Stonewt(11,0);
	double temp;
	int max = 0;
	int min = 0;
	int count = 0;	

	for (int i=3; i<6; i++)
	{
		cout << "Enter Array Item #" << i+1 << " :";
		cin >> temp;
		rocks[i] = temp;
	}

//
	for (int i=0; i<6; i++)
	{
		rocks[i].show_lbs();
	}

	for (int i=0; i<6; i++)
	{
		rocks[i].show_stn();
	}

	cout << endl;
	rockwt.show_lbs();
//

	for (int i=0; i<6; i++)
	{
	
		if(rocks[i] > rocks[max])
		{
			max = i;
		}
		else if(rocks[i] < rocks[min])
		{
			min = i;
		}
		if (rocks[i] >= rockwt)
		{
			count++;
		}
		
	}

	cout << endl << endl;
	cout << "Here are the results!" << endl;
	cout << "Max Stone Weight: ";
	rocks[max].show_stn();
	cout << endl;
	cout << "Min Stone Weight: ";
	rocks[min].show_stn();
	cout << endl;
	cout << "The number of entries over ";
	rockwt.show_stn();
	cout << ": " << count << endl;

	cout << endl << endl;

	system("PAUSE");
	return 0;
}

void display(const Stonewt & st, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Wow! ";
        st.show_stn();
    }
}
