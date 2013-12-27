//*******************************
//
//  Chapter Review Questions
//
//*******************************

#include <iostream>
using namespace std;

// 1.	short functions that do not have recursion


// 2.a.	Yes.
		void song(const char * name, int times = 1);

// 2.b.	None.

// 2.c.	Yes.  As long as you provide a default value for "int times"
		void song(const char * name = "O, My Papa", int times = 1);

// 3.a.	
		void iquote(int);
		void iquote(int x)
		{
			cout << "\"" << x << "\"" << endl;
			return;
		}
// 3.b.	
		void iquote(double);
		void iquote(double y)
		{
			cout << "\"" << y << "\"" << endl;
			return;
		}
// 3.c.	
		void iquote(const char *);
		void iquote(const char * z)
		{
			cout << "\"" << z << "\"" << endl;
			return;
		}

// 4	Structure Passing

		struct box
		{
			char maker[40];
			float height;
			float width;
			float length;
			float volume;
		};	
		
// 4.a.
		void display (box &);
		
		box top = {"kellogg",10,15,20,3000};
		void display (const box & lid)
		{
			cout << lid.maker << endl;
			cout << lid.height << endl;
			cout << lid.width << endl;
			cout << lid.length << endl;
			cout << lid.volume << endl;

			return;
		}

// 4.b.
		void display1 (box &);
		
		box top1 = {"kellogg",10,15,20};
		void display1 (box & lid1)
		{
			
			lid1.volume=lid1.height*lid1.length*lid1.width;
			cout << lid1.maker << endl;
			cout << lid1.height << endl;
			cout << lid1.width << endl;
			cout << lid1.length << endl;
			cout << lid1.volume << endl;

			return;
		}

// 5.	Change the pointers to references.  Call the function using the variable name.  
//		Change the definition of the function to ue the actual variable instead of the pointer.

// 6.a.	both
		double mass(double a, double b = 1); // Default values

		double mass1(double, double);	// Function Overloading
		double mass1(double);

// 6.b.	Overloading
		void repeat(int, char *);

		void repeat(char *);

// 6.c. overloading
		int average(int, int);
		double average(double, double)

// 6.d.	Neither will work.  They will both have the same definition.
		// char mangle(char *);
		// char * mangle(char *);
		// char mangle(char []);
		// char * mangle(char *);
		
// 7.
		template <typename T>

		T compare(T x, T y)
		{
			if (x > y)
			{
				return x;
			}
			else if (y > x)
			{
				return y;
			}
			else
			{
				return x;
			}
		}

// 8.	Using BOX Structure in #4 & Template in #7
		template<> box compare<box>(box x, box y);

		template<> box compare<box>(box x, box y)
		{
			if (x.volume > y.volume)
			{
				return x.volume;
			}
			else if (y.volume > x.volume)
			{
				return y.volume;
			}
			else
			{
				return x.volume;
			}
		}

// 9.	v1 = float
//		v2 = float
//		v3 = float
//		v4 = int
//		v5 = double
