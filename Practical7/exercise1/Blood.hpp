#ifndef Blood_hpp
#define Blood_hpp
#include <stdio.h>
#include "Date.hpp"

class Blood{
protected:
    int systolic;
    int diastolic;
    Date d;

public:
    Blood(); //empty constructor
    Blood(int, int, Date); //constructor taking systolic, diastolic and date
    int getSystolic(); //getting systolic value for specific record
    int getDiastolic(); //getting diastolic value for specific record
    void print(); //print systolic & diastolic values

};




#endif // Blood_hpp
