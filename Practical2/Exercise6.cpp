#include <iostream>
using namespace std;

int input;

int fibonacciCalculation(int n){


  if (n ==0|| n ==1 ) return n;
    else{
      return ( fibonacciCalculation(n-1) + fibonacciCalculation(n-2) );
    }

}

int main() {

    cout << "Provide positive number: " << endl;
    cin >> input;

    cout << fibonacciCalculation(input);

    return 0;

}

