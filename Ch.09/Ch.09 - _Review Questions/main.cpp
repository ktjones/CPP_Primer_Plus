//*******************************
//
//  Chapter Review Questions
//
//*******************************

// #include <iostream>
// using namespace std;

// 1.a.	automatic - This happens automatically
// 1.b	static external - Declare the variable globally, and do NOT use the STATIC reference
// 1.c	static internal - Declare the variable gloablly, and USE the STATIC reference
// 1.d	static no linkage - Declare the variable in the function, and Use the STATIC reference 

// 2.	Using declaration - brings a specific name from a namespace into the current namespace.
//		Using directive	- brings the entire namespace into the current namespace.

// 3.	Rewrite code without a USING directive or declaration
		/*		
		#include<iostream>
	
		int main()
		{
			double x;
			std::cout << "Enter Value: ";
			while (!(std::cin>>x))
			{
				std::cout <<"Bad input.  Please enter a number: ";
				std::cin.clear();
				while (std::cin.get() != '\n')
				{
					continue;
				}
			}
			std::cout << "Value = " << x << std::endl;
			return 0;
		}
		*/

// 4.	Rewrite code with USING Declarations
		/*
		#include <iostream>
		using std::cin;
		using std::cout;
		using std::endl;

		int main()
		{
			double x;
			cout << "Enter value: ";
			while (! (cin >> x) )
			{
				cout << "Bad input. Please enter a number: ";
				cin.clear();
				while (cin.get() != '\n')
				continue;
			}
			cout << "Value = " << x << endl;
			return 0;
		}
		*/

// 5.	Each file could define the function separately, using the STATIC reference so that the function will only be usable in that file.
//		Each function could be defined using unnamed namespace within that file.

// 6.	Displays the following:
//		
//		10
//		4
//		0	// Since this variable was declared as a global it was initialized to zero by the compiler.
//		Other: 10, 1
//		Another(): 10, -4

// 7.	Displays the following:
//		
//		1
//		4, 1, 2
//		2
//		2
//		4, 1, 2
//		2