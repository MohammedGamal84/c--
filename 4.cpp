#include <iostream>
using namespace std;

int main() {
    int day;
    cout <<"Enter day number (1to 7): ";
    cin >>day;
    if (day == 1)
        cout << "Sunday\n";
    else if (day == 2)
        cout << "Monday\n";
    else if (day == 3)
        cout << "Tuesday\n";
    else if (day == 4)
        cout << "Wednesday\n";
    else if (day == 5)
        cout << "Thursday\n";
    else if (day == 6)
        cout << "Friday\n";
    else if (day == 7)
        cout << "Saturday\n";
    else
        cout << "Invalid day number\n" ;
    return 0;
}