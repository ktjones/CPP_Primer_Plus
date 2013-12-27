// vect3.cpp -- using STL functions
#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <algorithm>

using namespace std;

struct Review 
{
    string title;
    int rating;
	double price;
};

bool operator<(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2);
bool operator>(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2);
bool worseThan(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2);
bool greaterThan(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2);
bool lessThan(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2);
bool moreThan(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2);
bool FillReview(shared_ptr<Review> & rr);
void ShowReview(const shared_ptr<Review> & rr);

int main()
{

	bool flag = true;
	char menu = '\0';
	vector<shared_ptr<Review>> books;
	

	while (flag)
	{
		shared_ptr<Review> temp(new Review);
		flag = FillReview(temp);
		if (flag == true)
		{
			books.push_back(temp);
		}
		
	}

	if (books.size() > 0)
    {
        
		while (menu != 'q')
		{
			cout << endl << endl;
			cout << "Please enter your display selection: " << endl;
			cout << "a) Original Order" << endl;
			cout << "b) Alpabetical Order" << endl;
			cout << "c) Increasing Ratings Order" << endl;
			cout << "d) Decreasing Ratings Order" << endl;
			cout << "e) Increasing Price" << endl;
			cout << "f) Decreasing Price" << endl;
			cout << "q) Quit" << endl;
			cout << "Choice: ";
			cin >> menu;

			if (menu == 'a')
			{
				cout << "Thank you. You entered the following " << books.size() << " ratings:\n" << "Rating\tBook\n";
				for_each(books.begin(), books.end(), ShowReview);
			}
			else if (menu == 'b')
			{
				cout << "Sorted by title:\nRating\tBook\n";
				cout << "Thank you. You entered the following " << books.size() << " ratings:\n" << "Rating\tBook\n";
				sort(books.begin(), books.end());
				for_each(books.begin(), books.end(), ShowReview);

			}
			else if (menu == 'c')
			{
				cout << "Sorted by rating:\nRating\tBook\n";
				cout << "Thank you. You entered the following " << books.size() << " ratings:\n" << "Rating\tBook\n";
				sort(books.begin(), books.end(), worseThan);
				for_each(books.begin(), books.end(), ShowReview);

			}
			else if (menu == 'd')
			{
				cout << "Sorted by rating:\nRating\tBook\n";
				cout << "Thank you. You entered the following " << books.size() << " ratings:\n" << "Rating\tBook\n";
				sort(books.begin(), books.end(), greaterThan);
				for_each(books.begin(), books.end(), ShowReview);

			}
			else if (menu == 'e')
			{
				cout << "Sorted by rating:\nRating\tBook\n";
				cout << "Thank you. You entered the following " << books.size() << " ratings:\n" << "Rating\tBook\n";
				sort(books.begin(), books.end(), lessThan);
				for_each(books.begin(), books.end(), ShowReview);

			}
			else if (menu == 'f')
			{
				cout << "Sorted by rating:\nRating\tBook\n";
				cout << "Thank you. You entered the following " << books.size() << " ratings:\n" << "Rating\tBook\n";
				sort(books.begin(), books.end(), moreThan);
				for_each(books.begin(), books.end(), ShowReview);

			}
			else if (menu == 'q')
			{
				cout << "Bye Bye" << endl;
				break;
			}
		}

		/*
        random_shuffle(books.begin(), books.end());
        cout << "After shuffling:\nRating\tBook\n";
        for_each(books.begin(), books.end(), ShowReview);
		*/
    }
	else
	{
		cout << "No entries. ";
	}
	
	cout << "Bye.\n";
    // cin.get();

	cout << endl << endl;
	system("PAUSE");	
	return 0;
}

bool operator<(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2)
{
    if (r1->title < r2->title)
        return true;
    else if (r1->title == r2->title && r1->rating < r2->rating)
        return true;
    else
        return false;
}

bool operator>(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2)
{
	if (r1->title > r2->title)
		return true;
	else if (r1->title == r2->title && r1->rating > r2->rating)
		return true;
	else
		return false;
}

bool worseThan(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2)
{
    if (r1->rating < r2->rating)
        return true;
    else
        return false;
}

bool greaterThan(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2)
{
	if (r1->rating > r2->rating)
		return true;
	else
		return false;
}

bool lessThan(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2)
{
	if (r1->price < r2->price)
		return true;
	else
		return false;
}

bool moreThan(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2)
{
	if (r1->price > r2->price)
		return true;
	else
		return false;
}

bool FillReview(shared_ptr<Review> & rr)
{
    cout << "Enter book title (quit to quit): ";
    getline(cin,rr->title);
	if (rr->title == "quit")
	{
		return false;
	}
    
	cout << "Enter book rating: ";
    cin >> rr->rating;
	if (!cin)
	{
		return false;
	}

	cout << "Enter book price: ";
	cin >> rr->price;
	if (!cin)
	{
		return false;
	}

    // get rid of rest of input line
	while (cin.get() != '\n')
	{
		continue;
	}

    return true;
}

void ShowReview(const shared_ptr<Review> & rr)
{
    std::cout << rr->rating << "\t" << rr->title << std::endl; 
}
