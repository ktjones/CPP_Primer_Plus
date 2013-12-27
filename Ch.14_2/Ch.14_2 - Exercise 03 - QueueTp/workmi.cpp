// workmi.cpp -- multiple inheritance
// compile with workermi.cpp
#include <iostream>
#include <cstring>
#include "workermi.h"
#include "queue.h"

const int SIZE = 5;

int main()
{
   using std::cin;
   using std::cout;
   using std::endl;
   using std::strchr;

   Worker * lolas[SIZE];

    int ct;
    for (ct = 0; ct < SIZE; ct++)
    {
        char choice;
        cout << "Enter the employee category:\n"
            << "w: waiter  s: singer  "
            << "t: singing waiter  q: quit\n";
        cin >> choice;
        while (strchr("wstq", choice) == NULL)
        {
            cout << "Please enter a w, s, t, or q: ";
            cin >> choice;
        }
        if (choice == 'q')
		{
			break;
		}
        switch(choice)
        {
            case 'w':   lolas[ct] = new Waiter;
                        break;
            case 's':   lolas[ct] = new Singer;
                        break;
            case 't':   lolas[ct] = new SingingWaiter;
                        break;
        }
        cin.get();
        lolas[ct]->Set();
    }

    cout << "\nHere is your staff:\n";
    for (int i = 0; i < ct; i++)
    {
        cout << endl;
        lolas[i]->Show();
    }
   
	QueueTp<Worker *> Purgatory;

	for (int i=0;i<SIZE;i++)
	{
		Purgatory.enqueue(lolas[i]);
	}

	Worker * outproc[SIZE];

	for (int i=0;i<SIZE;i++)
	{
		Purgatory.dequeue(outproc[i]);
	}

	cout << endl;

	cout << "\nHere is your Out Processed staff:\n";
    for (int i = 0; i < ct; i++)
    {
        cout << endl;
        outproc[i]->Show();
    }


	for (int i = 0; i < ct; i++)
    {
			delete lolas[i];
			// Don't need to do this for OUTPROC, because it points to the same memory locations, which were just deleted.
	
	}
	
	cout << "Bye.\n";
    
    cout << endl << endl;
	system("PAUSE");

	return 0; 
}
