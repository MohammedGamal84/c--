#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout<<"Enter first number: ";
    cin>> a;
    cout<<"Enter second number: ";
    cin>> b;

    if (a == b)
        cout<< "The numbers are equal.\n";
    else
        cout<<"The numbers are not equal.\n";

    return 0;
}