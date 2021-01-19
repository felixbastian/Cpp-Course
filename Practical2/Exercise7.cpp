#include <iostream>
using namespace std;

int input1, input2;
int iterations1=0, iterations2=0;

int powerCalculation(int m, int n){

    iterations1++;
  if (n == 0 ) return 1;
    else if (n>=1)return ( m*powerCalculation(m, n-1) );


}

int powerCalculation2(int m, int n) {

    iterations2++;

  if (n == 0 ) return 1;
    else if (n>=1 && n%2==0)return ( powerCalculation2(m, n/2)*powerCalculation2(m, n/2) );
    else if (n>=1 && n%2!=0)return ( m*powerCalculation2(m, n/2)*powerCalculation2(m, n/2) );


}

int main() {

    cout << "Provide base number: " << endl;
    cin >> input1;

    cout << "Provide non-negative power number: " << endl;
    cin >> input2;

    cout << "Output of first power Calculation: " <<powerCalculation(input1, input2)<< endl;
    cout << "Number of iterations required: " <<iterations1 << endl;
    cout << "The first recursive algorithm is executed exactly n+1-times (n being the exponent) since the function calls itself while reducing n by one unit (n-1). At the same time, the function adds one base (m) to the multiplication m^4=(m*(m*(m*(m*(1)))). This happens until 0 is reached (including 0, therefore n+1 times)."<< endl << endl;

    cout << "Output of second power Calculation: " << powerCalculation2(input1, input2)<< endl;
    cout << "Number of iterations required: " <<iterations2<< endl ;
    cout << "The second recursive algorithm is much more complicated since the recursive function is called twice:"<< endl;
    cout << "The structure indicates that the amount of steps (i): if (n==1) i = 3; After, the amount of steps double +1 every time when n is between its double and double +1" << endl;
    cout << "Pseudo code: --> If (n==1) return 3; if (n==2||n==3) return 7; if (n==4 to 7) return 15; if (n==8 to 15) return 31;" << endl;
    cout << "This becomes clear as calling the recursive function twice leads to forking the function, leading to forking the function ...";

    return 0;

}

