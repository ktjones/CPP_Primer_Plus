// usebrass2.cpp -- polymorphic example
// compile with brass.cpp
#include <iostream>
#include <string>
#include "header.h"

const int MAX = 4;

using namespace std;

int main()
{
	
	baseDMA * p_clients[MAX];
	
	char temp1[50];   // label
	char temp2[50];   // color
	char temp3[50];   // style
	long tempnum;    // rating
	
	char kind;		// switch

	for (int i = 0; i < MAX; i++)
	{
		
		cout << "Enter the Label name: ";
		cin.get(temp1,50);
		cin.get();
		cout << "Enter the ratings number: ";
		cin >> tempnum;
		
		cout << "Enter 1 for LacksDMA or " << "2 for HasDMA: ";
		while (cin >> kind && (kind != '1' && kind != '2'))
		{
			cout <<"Enter either 1 or 2: ";
		}
		cin.get();
		if (kind == '1')
		{
			cout << "Enter the Color: ";
			cin.get(temp2,50);
			cin.get();
			p_clients[i] = new lacksDMA(temp2,temp1,tempnum);
		}
		else
		{
			cout << "Enter the Style: ";
			cin.get(temp3,50);
			cin.get();
			p_clients[i] = new hasDMA(temp3, temp1, tempnum);
		}
		
		cout << endl;

		/*
		while (cin.get() != '\n')
		{
			continue;
		}
		*/

	}
	
	
	cout << endl;
	
	for (int i = 0; i < MAX; i++)
	{
		p_clients[i]->View();
		cout << endl;
	}
              
	for (int i = 0; i < MAX; i++)
	{
		delete p_clients[i];  // free memory
	}

	cout << "Done.\n";         
	
	cout << endl << endl;
	system("PAUSE");

	return 0; 
}
