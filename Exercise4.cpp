#include <iostream>
using namespace std;

int input;
int floydization(int);

int main(){
    cout << "Provide input: ";
    cin >> input;

    cout << floydization(input);

}

int floydization(int n){
    int counter = 1;

    for (int i = 1; i < n+1; i++){
        for (int j = 1; j<i+1; j++){

            cout<< counter <<" ";
            counter++;
        }

      //  if (i != n-1)
            cout << endl;


    }


}
