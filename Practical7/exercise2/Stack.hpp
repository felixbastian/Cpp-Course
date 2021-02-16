#ifndef Stack_hpp
#define Stack_hpp

#include <iostream>
#include "StackI.hpp"

using namespace std;

template <typename T>

class Stack:StackI<T>{
protected:
   int arraySize; //Size of the stack
   int elements; //Number of elements currently in the stack
   T *arr; //undefined array to hold the stack elements
   int position; //current position in stack


public:
    Stack(){
        arraySize = 20; //set array size to 20 by default
        arr = new T [arraySize];
        elements = 0;
        position = 0;
    }

    Stack(int arraySize){
        this->arraySize = arraySize; //let user pass array size
        arr = new T [arraySize];
        elements = 0;
        position = 0;
    }

//insert new element
    void push(T t){
        if (elements <arraySize) {
                arr[position++] = t;
                elements++;
        }
        else{
            cout <<"Push attempt out of range! Only first " << arraySize << " items will be considered" << endl;
        }

    }

    //delete top element
    void pop(){
        if(elements >0){
                --position;
                --elements;
        }
        else if(position == 0) cout << "Position is at 0, no elements can be taken out; pop() ignored." << endl;
    }

// return top element
    T top(){
        if(elements > 0){
            cout<< "Top position at " << arr[position-1] << endl;
            return arr[position-1];
             }
        else if (elements ==0) {
                cout << "There are no elements in the table to return top position; top() ignored." << endl;
                return 0;
        }
    }

// check whether array is empty
    bool isEmpty(){
        if (position == 0) {
                cout << "Array empty" << endl;
                return true;
        }
        else {
                cout << "Array not empty" << endl;
                return false;
        }
    }

// print result
    void print(){

        if(elements == 0) cout << "The array is empty" << endl;
        else{
            cout << "[";

            for (int i = position-1; 0<=i;i--){
                cout<< arr[i] <<" ";
            }
                cout << "]" << endl;
        }
    }





};
#endif // Stack_hpp
