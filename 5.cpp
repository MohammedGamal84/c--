#include <iostream>
using namespace std;

int main() {
    int a, b;
    
    cout << "Enter first number: ";
    cin>> a;
    cout<< "Enter second number: ";
    cin>> b;

    if (a >b)
        cout<<"Maximum: "<<a <<"\n";
    else if (b> a)
        cout<<"Maximum: "<<b<<"\n";
    else
        cout<<"Both numbers are equal."<<"\n";

    return 0;
}