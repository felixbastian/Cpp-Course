#include "Date.hpp"
#include <iostream>

    Date::Date(){}
    Date::Date(int day, int month, int year){
        this->day = day;
        this->month = month;
        this->year = year;
    }

    void Date::print(){
        cout << " " << day <<"/" << month<< "/" << year;
        cout << endl;
    }




