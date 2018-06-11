#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    int total = 107; // Total number of prime numbers to print.
    bool isPrime = true;
    int number = 2; // First prime number.
    int count;

    // For loop to count the number of prime numbers printed.
    for (count = 2; count <= total+1; ) {

        // For loop to test if the 'number' is a prime number. 
        for (int possibleFactor = 2; possibleFactor <= sqrt(number); ++possibleFactor) {
            
            // If any number above 1 but below or equal to the square root of the
            // target number divides evenly into the target number, then it is a
            // factor of the target number and the target number is not a prime number.
            if (number % possibleFactor == 0) {
                isPrime = false;
                break;
            }
        }

        // If the number is prime, it should be printed.
        if (isPrime) {
            cout << number << endl;
            ++count; // Increase the count.
        }

        // Change the condition back to true in case the next number is a prime number
        // and increment the next number to be tested if prime.
        isPrime = true;
        ++number;
    }

    // Print out the number of prime numbers printed.
    cout << "\n" << count-2 << " prime numbers printed." << endl; 

    return 0;
}