#include <iostream>
using namespace std;

int main() {
    int num;
    cout<< "Enter a number: ";
    cin>> num;

    if (num % 2 == 0)
        cout <<"Even\n";
    else
        cout <<"Odd\n";

    return 0;
}