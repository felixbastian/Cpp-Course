#include <iostream>
using namespace std;

int input;
int fib1 = 0;
int fib2 = 1;
int fib = 0;

int fibonacciCalculation(int n) {

    int var1, var2;

  if (n ==0|| n ==1 ) return n;

  for(int i=2;i<=n;i++){
        fib = fib1+fib2;
        fib1 = fib2;
        fib2= fib;
  }
  return fib;

 }

int main() {

    cout << "Provide positive number: " << endl;
    cin >> input;

    cout << fibonacciCalculation(input);


}
