#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

bool b = false;

void read_poly(vector<double> &c, int &n){
  double input;

  if( b == false) cout << "Grade of function: "; //Controlling instance to whether it is the first or second function input
  else cout << "Grade of second function: ";

  cin >> n;
  for(int i=0;i<=n;i++){
    cout << "Coefficient of degree " << i << ": ";
    cin >> input;
    c.push_back(input);
  }

  b = true; //The function has been accessed before; Awaiting second input

}

void print_poly( vector <double> c, int n){

    for(int i=0;i<=n;i++){
        if (c[i] == 0); //jump grade[i] if the sum is equal to 0

        else{
            if (i==0) cout << c[0]; // print first coefficient (x^0)
            else if (c[i] >=0){
                cout << "+"<< c[i] << "*x^" << i ; //print coefficient with appropriate grade (result = positiv)
            }
            else if (c[i] <0){
                cout << c[i] << "*x^" << i ; //print coefficient with appropriate grade (result = negativ)
            }
        }
    }
    cout << endl << endl;
}


void calculatePosition(vector <double> c, int n){
  string f;
  double solution;

  //Give user the option to decline calculating the position of the polynomial
  cout << "Would you like to calculate the position of the polynomial by providing an x-value? (Yes/No) " << endl;
  cin >> f;
  if ( f == "No") return;

  else if ( f == "Yes"){
  double x;
  cout << "Provide value for x: ";
  cin >> x;

  solution = c[0];
  for(int i=1;i<=n;i++){
    solution += c[i]*pow(x,i);
    }
  cout << solution << endl;
  }

  else cout << "Sorry, I did not understand that." << endl;
}


void poli_sum (vector <double> &p1, int d1, vector <double> &p2, int d2, int &dr){

    cout << "The sum of both polynomials is equal to: " << endl;

    //resize the vectors so that both have defined coefficients at all grades
    if (d1 <= d2) p1.resize(d2+1);
    else if (d1 > d2)  p2.resize(d1+1);

    //set the vector size of the resulting polynomial
    dr = p1.size()-1;

    for(int i=0;i<=dr;i++){
        if (p1[i] + p2[i] == 0); //jump grade[i] if the sum is equal to 0

        else{
            if (i==0) cout << p1[0] + p2[0]; // print first coefficient (x^0)
            else if (p1[i] + p2[i] >=0){
                cout << "+"<< p1[i] + p2[i] << "*x^" << i ; //print sum of coefficients with appropriate grade (result = positiv)
            }
            else if (p1[i] + p2[i] <0){
                cout << p1[i] + p2[i] << "*x^" << i ; //print sum of coefficients with appropriate grade (result = negativ)
            }
        }
    }
    cout << endl << endl;
}


void poli_product(vector <double> &p1, int d1, vector <double> &p2, int d2, int &dr){

 cout << "The product of both polynomials is equal to: " << endl;

    //resize the vectors so that both have defined coefficients at all grades
    if (d1 <= d2) p1.resize(d2+1);
    else if (d1 > d2) p2.resize(d1+1);

    //set the vector size of the resulting polynomial
    dr = p1.size()-1;

    for(int i=0;i<=dr;i++){
        if (p1[i] * p2[i] == 0); //jump grade[i] if the product is equal to 0

        else{
            if (i==0) cout << p1[0] * p2[0]; // print first coefficient (x^0)
            else if (p1[i] * p2[i] >=0){
                cout << "+"<< p1[i] * p2[i] << "*x^" << i ; //print product of coefficients with appropriate grade (result = positive)
            }
            else if (p1[i] * p2[i] <0){
                cout << p1[i] * p2[i] << "*x^" << i ; //print product of coefficients with appropriate grade (result = negative)
            }
        }
    }
    cout << endl << endl;

}

int main()
{
   //vector that save the coefficients of polynomials (allocates memory dynamically)
   vector<double> p1;
   vector<double> p2;
  //Variables that save the grades of the functions
  int g1, g2, g3;

  read_poly(p1,g1);
  print_poly(p1,g1);
  calculatePosition(p1, g1);

  read_poly(p2,g2);
  print_poly(p2,g2);
  calculatePosition(p2, g2);

  poli_sum(p1,g1, p2, g2, g3);
  poli_product(p1,g1, p2, g2, g3);

  return 0;
}


