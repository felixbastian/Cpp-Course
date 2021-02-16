#include "Blood.hpp"
#include "Date.hpp"
#include <iostream>

    Blood::Blood(){}
    Blood::Blood(int systolic, int diastolic, Date d){
        this->systolic = systolic;
        this->diastolic = diastolic;
        this-> d=d;
    }

    int Blood::getSystolic(){
        return this-> systolic;
    }

    int Blood::getDiastolic(){
        return this->diastolic;
    }

    void Blood::print(){
        cout<<"Syst.: "<<  systolic << " Dias.: " << diastolic << " ";
        d.print();
    }

