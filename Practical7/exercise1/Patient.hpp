#ifndef Patient_hpp
#define Patient_hpp

#include <iostream>
#include <vector>
#include <string>
#include "Blood.hpp"
//#include "Date.hpp"

using namespace std;

class Patient{
protected:
    string name;
    vector<Blood> bloodValues;

public:
    Patient(string name);
    void addRecord(Blood);
    void printReport();
};
#endif // Patient_hpp
