// sayings1.cpp -- using expanded String class
// compile with string1.cpp
#include <iostream>
#include "string1.h" 

const int ArSize = 10;
const int MaxLen =81;

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    String name;
   
	cout <<"Hi, what's your name?\n>> ";
    cin >> name;
	cout << name << ", please enter up to " << ArSize
         << " short sayings <empty line to quit>:\n";
    
	String sayings[ArSize];     // array of objects
    
	char temp[MaxLen];          // temporary string storage
    int i;
    
	for (i = 0; i < ArSize; i++)
    {
        cout << i+1 << ": ";
        cin.get(temp, MaxLen);
        
		while (cin && cin.get() != '\n')
        {    
			continue;
		}
        
		if (!cin || temp[0] == '\0')    // empty line?
		{
			break;              // i not incremented
		}
		else
		{
			sayings[i] = temp;  // overloaded assignment
		}
    }
    
	int total = i;              // total # of lines read

	if ( total > 0)
    {
        cout << "Here are your sayings:\n";
        for (i = 0; i < total; i++)
		{
            cout << sayings[i][0] << ": " << sayings[i] << endl;
		}
        
		int shortest = 0;
        int first = 0;
        
		for (i = 1; i < total; i++)
        {
            if (sayings[i].length() < sayings[shortest].length())
            {
					shortest = i;
			}
            if (sayings[i] < sayings[first])
			{
				first = i;
			}
        }
        
		cout << "Shortest saying:\n" << sayings[shortest] << endl;;
        cout << "First alphabetically:\n" << sayings[first] << endl;
        cout << "This program used "<< String::HowMany() 
             << " String objects. Bye.\n";
    }
    else
    {
		cout << "No input! Onto Part 2.\n";
	}

	String Todd1 = String("TODD IS ");
	String Todd2 = String("THE BESTEST EVER!");
	String Todd3 = String();

	Todd3 = Todd1 + Todd2;

	cout << endl << endl;
	cout << Todd1 << Todd2 << endl;
	cout << "Let's hear that again..." << endl;
	cout << Todd3;
	cout << endl << endl;

	cout << endl << "Stop all the shouting!" << endl << endl;
	
	Todd3.stringlow();

	cout << "<whisper> " << Todd3 << " <whisper>" << endl << endl;
	cout << "That's Better!" << endl;

	cout << "Wait! No it isn't! Let's hear that again at full volume!" << endl << endl;;

	Todd3.stringup();

	cout << Todd3 << endl << endl;
	cout << "Yep! That's Better!" << endl << endl;

	cout << endl << endl;
	
	cin.clear();
	cin.get();

	char ch;
	cout << endl << endl;
	cout << "What letter are you interested in? " << endl;
	cin.get(ch);
	

	int charcount = 0;
	charcount = Todd3.stringchar(ch);
	cout << endl;
	cout << "That letter appears " << charcount << " times!" << endl << endl;

	system("PAUSE");
	return 0; 
}

