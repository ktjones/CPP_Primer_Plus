//*******************************
//
//  Chapter Review Questions
//
//*******************************


1.	Provide a definition
	Provide a prototype
	Call the function

2.	a. void igor()
	b. float tofu(int)
	c. double mpg (double, double)
	d. long summation(long array[], int)
	e. double doctor(const char *)
	f. void ofcourse(boss)
	g. char * plot(map *)

3.	void function(int array[], int arraysize, int number);

	void function(int array[], int arraysize, int number)
	{
		for (int i=0;i<arraysize;i++)
		{
			array[i] = number;
		}
		return;
	}

4.	void exercise05(int * arraystart, int * arrayend, int number)
	{
		int * ptr = arraystart;

		while (ptr != arrayend)
		{
			*ptr = number;
			ptr++;
		}
	}

5.	double arraymaxvalue(const double array[], int arrayrange)
	{
		double maxvalue = array[0];
		
		for (int i = 1; i < arrayrange; i++)
		{
			if (array[i] > maxvalue)
			{
				maxvalue = array[i])
			}
		}
	
		return maxvalue;
	}

6.	Because, when using "pass by value" you are working with copies.  Manipulating the copies does not hurt the originals.

7.	character array
	string literal
	pointer to char

8.	int replace(char * str, char c1, char c2)
	{
		int counter = 0;
		
		while (*str)
		{
			if (*str == c1)
			{
				*str = c2;
				counter++;
			}
			str++;
		}

		return counter;
	}

9.	*"pizza"  => The letter p.  
	"taco"[2] => The letter c.

10.	pass by value:		use the structure name (glitz) in the function call.
	pass by address:	use the structure name and the address operator & (&glitz).

11.	int judge(int (*passedfunction)(const char *));

12.	a.	void structfunction(applicant bob)
		{	
			cout << "Applicant Name: " << bob.name << endl;
			
			for (int i=0; i < 3; i++)
			{
				cout << "Credit Rating #" << i+1 << ": " << bob.credit_ratings[i] << endl;
			}
		}

	b.	void structfunction(const applicant * bob)
		{	
			cout << "Applicant Name: " << endl;
			cout << bob->name << endl;
			
			for (int i=0; i < 3; i++)
			{
				cout << "Credit Rating #" << i+1 << ": " << bob->credit_ratings[i] << endl;
			}
		}

13.	functions:
	void f1(applicant * a);
	const char * f2(const applicant * a1, const applicant * a2);

	//Declare a pointer, p1 that points to f1
	void (*p1)(applicant *);
	p1 = f1;

	//Declare a pointer, p2 that points to f2
	const char * (*p2)(const applicant *, const applicant *);
	p2 = f2;

	//Declare an array of 5 pointers to the same type as p1
	void (*p1)(applicant *) ap[5];

	//Declare a pointer to an array of 10 pointers to the same type as p2
	const char * (*p2)(const applicant *, const applicant *) ar[10];
	const char * (*p2)(const applicant *, const applicant *) * pa = ar;
	or
	const char * (*p2)(const applicant *, const applicant *) (*pa)[10];
