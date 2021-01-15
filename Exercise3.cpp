#include <iostream>
#include <cmath>
using namespace std;

int x, y;

int swapping (int &x, int &y){
    int temp;

    temp = x;

    x = y;
    y = temp;

    return 0;

}

int main (){

    cout << "Provide first integer (X): ";
    cin >> x;

    cout << "Provide second integer (Y): ";
    cin >> y;

    swapping (x,y);

    cout << "X value is now equal to:" << x << endl;
    cout << "Y value is now equal to:" << y << endl;
}



