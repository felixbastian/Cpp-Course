#include "Stack.hpp"
#include <iostream>

int main(){


    Stack<int> d = Stack<int>(6);
    d.isEmpty();
    d.push(1);
    d.push(2);
    d.push(3);
    d.pop();
    d.push(4);
    d.push(5);
    d.push(6);
    d.top();

    d.print();
    d.isEmpty();

    Stack<double> s = Stack<double>();

    s.top();
    s.pop();
    s.push(2.0);
    s.pop();
    s.isEmpty();
    s.push(8.0);

    s.print();

    return 0;
}
