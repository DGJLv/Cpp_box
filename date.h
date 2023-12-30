#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Date{
    // private data
    private:
    unsigned day;
    unsigned month;
    string monthName;
    unsigned year;
    // private member functions
    bool isLeap(unsigned y) const;
    unsigned daysPerMonth(unsigned m, unsigned y) const;
    string name(unsigned m) const;
    unsigned number(const string &mn) const;
    
    
    public:
    // constructors
    Date();
    Date(unsigned m, unsigned d, unsigned y);
    Date(const string &mn, unsigned d, unsigned y);
    // public member functions
    void printNumeric() const;
    void printAlpha() const;
    Date addDays(int addDay) const;
};