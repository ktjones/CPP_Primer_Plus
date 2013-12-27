// stacker.cpp -- testing the Stack class
#include <iostream>
#include <cctype>  // or ctype.h
#include "header.h"
int main()
{
    using namespace std;
    Stack st; // create an empty stack
    customer cu;
	double cu_payments = 0.0;
	char ch;
    unsigned long po;
    cout << "Please enter A to add a new customer,\n"
        << "P to process an existing customer, or Q to quit.\n";
    while (cin >> ch && toupper(ch) != 'Q')
    {
        while (cin.get() != '\n')   
            continue;
        if (!isalpha(ch))
        {
            cout << '\a';
            continue;
        }
        switch(ch)
        {
             case 'A':
			 case 'a': cout << "Enter the Customer Name: ";
					   cin.getline(cu.fullname,35);
					   cout << "Enter a payment amount to add: ";
                       cin >> cu.payment;
                       if (st.isfull())
                           cout << "stack already full\n";
                       else
                           st.push(cu);
					   break;
             case 'P':
             case 'p': if (st.isempty())
                           cout << "stack already empty\n";
                       else {
                           st.pop(cu);
						   cu_payments = cu_payments + cu.payment;
						   cout << "Customer: " << cu.fullname << " popped\n";
						   cout << "Running Total of Payments are: " << cu_payments << endl;
                       }
                       break;
        }
        cout << "Please enter A to add a purchase order,\n"
             << "P to process a PO, or Q to quit.\n";
    }
    cout << "Bye\n";
    return 0; 
}
