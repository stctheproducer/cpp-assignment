#include <iostream>

using namespace std;

int userChoice;

int askUserForFirstNumber(){
    int x;
    
    // Get and store the first number in 'x'
    cout << "First number: ";
    cin >> x;

    return x;
}

int askUserForSecondNumber() {
    int y;

    // Get and store the second number in 'y'
    cout << "Second number: ";
    cin >> y;

    return y;
}

int askUserForGuess(){
    int guess;

    // Get and store the guess in 'guess'
    cout << "Guess: ";
    cin >> guess;

    return guess;
}

void modulusDivisionOfTwoNumbers(int x, int y, int guess) {
    int answer = x % y;

    // Loop through guesses.
    for(int a = 0; a < 2; ++a){
        if (guess == answer) {
            cout << endl << "That is correct!" << endl << endl;
            break;
        } else if (guess != answer && a == 1) {
            cout << endl << "That is incorrect. You have " << a << " more chance to guess correctly." << endl;
            guess = askUserForGuess();

            // Check if the second guess is correct.
            if (guess == answer) {
                cout << endl << "That is correct!" << endl << endl;
            }
        }
    }

    // Give user the correct answer.
    if (guess != answer) {
        cout << endl << "Sorry, but the correct answer is " << answer << ". Better luck next time!" << endl << endl;
    }
}

void multiplicationOfTwoNumbers(int x, int y, int guess) {
    int answer = x * y;

    // Loop through guesses.
    for(int a = 0; a < 2; ++a){
        if (guess == answer) {
            cout << endl << "That is correct!" << endl << endl;
            break;
        } else if (guess != answer && a == 1) {
            cout << endl << "That is incorrect. You have " << a << " more chance to guess correctly." << endl;
            guess = askUserForGuess();

            // Check if the second guess is correct.
            if (guess == answer) {
                cout << endl << "That is correct!" << endl << endl;
            }
        }
    }

    // Give user the correct answer.
    if (guess != answer) {
        cout << endl << "Sorry, but the correct answer is " << answer << ". Better luck next time!" << endl << endl;
    }
}

void subtractionOfTwoNumbers(int x, int y, int guess) {
    int answer = x - y;

    // Loop through guesses.
    for(int a = 0; a < 2; ++a){
        if (guess == answer) {
            cout << endl << "That is correct!" << endl << endl;
            break;
        } else if (guess != answer && a == 1) {
            cout << endl << "That is incorrect. You have " << a << " more chance to guess correctly." << endl;
            guess = askUserForGuess();

            // Check if the second guess is correct.
            if (guess == answer) {
                cout << endl << "That is correct!" << endl << endl;
            }
        }
    }

    // Give user the correct answer.
    if (guess != answer) {
        cout << endl << "Sorry, but the correct answer is " << answer << ". Better luck next time!" << endl << endl;
    }
}

int main() {

    // Repeat until user exits the program
    do {
        // Ask the user what they'd like to do.
        cout << "What would you like to do?" << endl << endl;
        cout << "1. Perform a Modulus division of two numbers" << endl;
        cout << "2. Perform Multiplication of two numbers" << endl;
        cout << "3. Perform subtraction of two numbers" << endl;
        cout << "4. Exit" << endl << endl;

        // Store the user's response in the 'userChoice' variable.
        cin >> userChoice;

        if (userChoice == 1) {
            // Ask the user for the two numbers to be operated on.
            cout << endl << "Please provide the two numbers you would like to operate on." << endl;
            int x = askUserForFirstNumber();
            int y = askUserForSecondNumber();
            // Ask the user for a guess
            cout << endl << "What do you think is the answer this operation will give?" << endl;
            int guess = askUserForGuess();
            modulusDivisionOfTwoNumbers(x, y, guess);
        }
        else if (userChoice == 2) {
            // Ask the user for the two numbers to be operated on.
            cout << endl << "Please provide the two numbers you would like to operate on." << endl;
            int x = askUserForFirstNumber();
            int y = askUserForSecondNumber();
            // Ask the user for a guess
            cout << endl << "What do you think is the answer this operation will give?" << endl;
            int guess = askUserForGuess();
            multiplicationOfTwoNumbers(x, y, guess);
        }
        else if (userChoice == 3) {
            // Ask the user for the two numbers to be operated on.
            cout << endl << "Please provide the two numbers you would like to operate on." << endl;
            int x = askUserForFirstNumber();
            int y = askUserForSecondNumber();
            // Ask the user for a guess
            cout << endl << "What do you think is the answer this operation will give?" << endl;
            int guess = askUserForGuess();
            subtractionOfTwoNumbers(x, y, guess);
        } else if (userChoice == 4) {
            cout << endl << "Thank you for playing!" << endl << endl;
        } else {
            cout << endl << "Please enter a valid choice." << endl << endl;
            continue;
        }
    } while (userChoice != 4);

    return 0;
}