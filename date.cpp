#include "date.h"
// Default constructor
Date::Date() : month(1), day(1), year(2000){
    monthName = name(month); 
};
// Constructor with parameter of month, day, and year
Date::Date(unsigned m, unsigned d, unsigned y) : month(1), day(1), year(2000){
    int err = 0;
    month = m;
    day = d;
    year = y;
    // month validation
    if(month > 12){
        err = 1;
        month = 12;
    }else if(month == 0){
        err = 1;
        month = 1;
    }
    // day validation
    if(day > daysPerMonth(month,year)){
        err = 1;
        day = daysPerMonth(month,year);
    }else if(day == 0){
        err = 1;
        day = 1;
    }
    // if it is invalid value, output the error message with corrected value
    if(err == 1){
        cout << "Invalid date value : Date correct to " << month << '/' << day << '/' << year <<endl;
    }
    // call name helper function to get name of the given month
    monthName = name(month);
}
// Constructor with a month name, day, and year
Date::Date(const string &mn, unsigned d, unsigned y){
    month = number(mn);
    day = d;
    monthName = mn;
    year = y;
    
    // when the input is invalid month name, it reset as a default date
    if (month == 999) { 
        month = 1; 
        day = 1;
        year = 2000;
        std::cout << "Invalid month name : the Date was set to " << month << '/' << day << '/' << year <<endl ;
     }
   monthName = name(month);
}

// Print the date in numeric format (MM/DD/YYYY)
void Date::printNumeric() const{
    cout <<  month << '/' << day << '/' << year;
}

// Print the date in alphanumeric format (Month Day, Year)
void Date::printAlpha() const{
    cout << monthName << ' ' << day << ", " << year;
}

// Add a specified number of days to the date
Date Date::addDays(int addDay) const{
    // set day as integer to avoid negative value problem
    int newDayValue = day + addDay;
    unsigned newMonth = month;
    unsigned newYear = year;
    
    // when the subtracted date is bigger than the current date
    // handle negative days by going backwards
    while (newDayValue < 1) {
        // month reduced
        newMonth--;
    // when the subtracted month is bigger than the current month 
    if (newMonth == 0) {
        // reset month as 12 and reduce the year
        newMonth = 12; 
        newYear--;
    }
    int previousDays = daysPerMonth(newMonth, newYear);
    newDayValue += previousDays;
    }
    // change the integer newDayValue to unsigned newDay for using argument of the fucntions
    unsigned newDay = static_cast<unsigned> (newDayValue);
    
    // handle positive days by going forwards
    while (newDay > daysPerMonth(newMonth, newYear)) {
        // if day exceeds days per month
        newDay -= daysPerMonth(newMonth, newYear);
        // add month
        newMonth++;
        // if month exceeds maximum
        if (newMonth > 12) {
            // reset month to January and increase year
            newMonth = 1; 
            newYear++;
        }
    }
    return Date(newMonth, newDay, newYear);
}
// Checks if the given year is a leap year
bool Date::isLeap(unsigned y) const{
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

// Returns the number of days in the given month for the given year
unsigned Date::daysPerMonth(unsigned m, unsigned y) const{
    int date;
    int days[] = {28, 29, 30, 31};
    if(m == 2){
        if(isLeap(y)){
        date = days[1];}
        else{
        date = days[0];}
    }else if(m == 4 || m == 6 || m == 9 || m ==11){
        date = days[2];
    }else{
        date = days[3];
    }
    return date;
}

// Returns the month's name for the given month number
string Date::name(unsigned m) const{
    const char* names[] = {"January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December"};
    return names[m - 1];
}

// Converts the month name to its corresponding number
// Returns -1 if the name does not correspond to a valid month
unsigned Date::number(const string &mn) const {
    string names[] = {"January", "February", "March", "April", "May", "June",
                           "July", "August", "September", "October", "November", "December"};
    string names2[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    // Convert the elements of names arrays to lowercase
    for (string &name : names) {
        for (char &c : name) {
            c = tolower(static_cast<unsigned char>(c));
        }
    }
    // convert the elements of names2 arrays to lowercase 
    for (string &name : names2) {
        for (char &c : name) {
            c = tolower(static_cast<unsigned char>(c));
        }
    }

    // Convert the mn string to lowercase
    string mnLower = mn;
    for (char &c : mnLower) {
        c = tolower(static_cast<unsigned char>(c));
    }
    
    // Compare mn with names and names2
    for (int i = 0; i < 12; ++i) {
        if (mnLower == names[i] || mnLower == names2[i]) {
            return i + 1;
        }
    }

    return 999;
}