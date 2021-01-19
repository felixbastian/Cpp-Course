#include <iostream>
#include <cmath>
using namespace std;

double initPosition;
double speed;
double acceleration;
double numberOfSamples; // = number of iterations
double sampleFrequency; // in seconds
double sampling = 0;

double calculation(double, double, double, double);

int main()
{
    cout << "Enter the initial position, the speed and the acceleration:   ";

    cin >> initPosition;
    cin >> speed;
    cin >> acceleration;

    cout << "How many times you want to display the position of the moving body?   ";

    cin >> numberOfSamples;

    cout << "How often (in seconds) you want to update the position of the moving object?   ";

    cin >> sampleFrequency;

    cout <<  endl<<  "Initial Position: "<< initPosition << endl;
    cout << "Speed: "<<speed << endl;
    cout << "Acceleration: "<<acceleration << endl;
    cout << "Number of times : "<<numberOfSamples << endl;
     cout << "Delta t : "<<sampleFrequency << endl<< endl;


    for (int i = 0; i < numberOfSamples;i++){

        cout << "At time "<<sampling <<" the position is "<<calculation(initPosition, speed, acceleration, sampleFrequency) << endl;

        sampling = sampling + sampleFrequency; // iterating the sample
    }

    return 0;

}


double calculation(double a, double j, double k, double t){

         double solution = a +  j*sampling + (k/2)*sampling*sampling;
        return solution;

    }

