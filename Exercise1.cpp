#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double xCo; //X coordinate of point
    double yCo; //Y coordinate of point
    double radius;
    double centerX;//X Coordinate of center point
    double centerY;//Y Coordinate of center point

    string determineEnclosure (double, double, double, double, double);

    cout << "set X coordinate of circle's center point"<< endl;
    cin >> centerX;

    cout << "set Y coordinate of circle's center point"<< endl;
    cin >> centerY;


    cout << "set radius of circle"<< endl;
    cin >> radius;

    cout << "set X-coordinate of point"<< endl;
    cin >> xCo;

    cout << "set Y-coordinate of point"<< endl;
    cin >> yCo;

    cout << determineEnclosure(xCo, yCo, centerX, centerY, radius);

    return 0;

}

string determineEnclosure(double i, double j, double k, double l, double m){

  if (pow((i-k),2) + pow((j-l),2)<= pow(m, 2)){
            //check whether distance between points is smaller or equal to radius
        return "Point IS enclosed in the defined circle";
    }

    else {
       return "Point IS NOT enclosed in the defined circle";
    }

}
