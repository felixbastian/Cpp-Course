#ifndef Date_hpp
#define Date_hpp
#include <iostream>
using namespace std;

class Date{
protected:
    int day;
    int month;
    int year;

public:
    Date(); //empty constructor
    Date(int, int, int); //taking day, month and year parameter
    void print(); //print date in format d/mm/yyyy
};




#endif // Date_hpp
