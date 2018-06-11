#include <iostream>

using namespace std;

int main() {
    int year;

    // Ask the user for input.
    cout << "Enter a number to check if it is a leap year: ";

    // Get the number from the user and store it in the variable 'year'.
    cin >> year;

    // If the year is exactly divisible by 400 then it is a leap year.
    if (year % 400 == 0) {
        cout << year << " is a leap year." << endl;
    }
    // If the year is exactly divisible by 100 and not by 400 then it is not a leap year.
    else if (year % 100 == 0)
    {
       cout << year << " is not a leap year." << endl;
    } 
    // If the year is exactly divisible by 4 and neither by 100 nor 400 then it is a leap year.
    else if (year % 4 == 0) {
        cout << year << " is a leap year." << endl;
    }
    // Not divisible by 4, 100 or 100.
    else {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}