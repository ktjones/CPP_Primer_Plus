// lotto.cpp -- probability of winning

#include <iostream>

// Note: some implementations require double instead of long double

long double probability(unsigned numbers, unsigned picks);

int main()
{
    using namespace std;
    double rtotal, rchoices;
	double mtotal, mchoices;
	long double rprob;
	long double mprob;
	long double tprob;
    
	cout << "Enter the following:" << endl;
	cout << "1. total number of regular choices on the game card" << endl;
	cout << "2. Number of picks allowed." << endl;
	cout << "3. Range for the Power Ball picks" << endl;
	cout << "4. Total Number of Power Ball picks" << endl;
    
	cout << endl << endl;

	while ((cin >> rtotal >> rchoices >> mtotal >> mchoices) && rchoices <= rtotal)
    {
		rprob = probability(rtotal, rchoices);		// compute the odds of the normal picks
		mprob = probability(mtotal, mchoices);      // compute the odds of the mega picks
        tprob = rprob * mprob;						// compute the odds of the combined picks

		cout << "You have one chance in ";
		cout << tprob;
		cout << " of winning.\n\n";
		cout << "Next set of numbers (or 'q' to quit): ";
    }
    
	cout << "bye\n";
    // cin.get();
    // cin.get();
    return 0;
}

// the following function calculates the probability of picking picks
// numbers correctly from numbers choices

long double probability(unsigned numbers, unsigned picks)
{
    long double result = 1.0;  // here come some local variables
    long double n;
    unsigned p;

    for (n = numbers, p = picks; p > 0; n--, p--)
        result = result * n / p ; 
    return result;
}
