// stonewt1.h -- revised definition for the Stonewt class
#ifndef STONEWT1_H_
#define STONEWT1_H_
class Stonewt
{
private:
    enum {Lbs_per_stn = 14};      // pounds per stone
	enum Mode {STN, LBS};
	int stone;                    // whole stones
    double pds_left;              // fractional pounds
    double pounds;				  // entire weight in pounds
	Mode mode;
public:
    // constructors
	Stonewt(double lbs);          // construct from double pounds
    Stonewt(int stn, double lbs); // construct from stone, lbs
    Stonewt();                    // default constructor
    ~Stonewt();
	
	// member functions
    //void show_lbs() const;        // show weight in pounds format
    //void show_stn() const;        // show weight in stone format
	
	// operator functions
	bool operator<(const Stonewt & st);	
	bool operator>(const Stonewt & st);
	bool operator==(const Stonewt & st);
	bool operator!=(const Stonewt & st);

	// conversion functions
    operator int() const;
    operator double() const;
	
	
	friend std::ostream & operator<<(std::ostream & os, Stonewt & st);


};
#endif
