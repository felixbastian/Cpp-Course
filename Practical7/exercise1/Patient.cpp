#include "Patient.hpp"
#include "Blood.hpp"
#include <iostream>

//name patient and create class instance
Patient::Patient(string name){
    this->name=name;
    this->bloodValues = vector<Blood>();
}

//add a new record and insert in vector
void Patient::addRecord(Blood values){
    this ->bloodValues.push_back(values);
}

//print patient-specific report

void Patient::printReport(){

    //vector containing the maximal systolic value measured
    vector<int> maxRecords;

    bool highSystolic = false; //Patient has by default not a high systolic value
    double avgDiastolic=0.0;
    int baseValue = 0; //calculation variable to identify max systolic value

    //Start report here

    cout<< "Report for: " << name << endl << endl;
    cout<< "Abnormal pressure values: " << endl;
     for(int i = 0; i < bloodValues.size(); i++){

     //Identify max systolic value
        if (bloodValues[i].getSystolic()> baseValue){
           baseValue = bloodValues[i].getSystolic();
        }

    //Identify and print abnormal systolic blood pressures
        if (bloodValues[i].getSystolic() > 140){
            bloodValues[i].print();
            highSystolic = true;
        }

    //Calculate average Diastolic blood pressure
        avgDiastolic += bloodValues[i].getDiastolic();
    }

    //Comment if all systolic values are below abnormal threshold
    if(highSystolic == false) cout << "No measurement was too high" << endl;

    cout << endl;

    //Print average Diastolic value
    cout << "Average Diastolic blood Value = " << avgDiastolic/bloodValues.size() << endl << endl;

    //Save & print indexes at which the max systolic value can be found
    cout << "Highest systolic pressure record: " << endl;
    for(int i = 0; i < bloodValues.size(); i++){
        if (bloodValues[i].getSystolic() == baseValue){
            maxRecords.push_back(i);
            bloodValues[i].print();
        }
}
    cout << endl << endl;


}


