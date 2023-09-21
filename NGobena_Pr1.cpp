/*
 * Class: CMSC140 CRN
 * Instructor: Sandro Fouche
 * Project<1>
 * Description: (Give a brief description for Project)
 * Due Date:
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Naol Gobena
*/




#include <iostream> // Include the input/output stream library for user interaction.
#include <cmath>    // Include the math library for mathematical calculations.

using namespace std; // Declare that we're using the standard namespace.

const string NAME = "Naol Gobena"; // Define a constant string for the programmer's name.

int main() {
    string studentName;          // Declare a variable to store the user's name.
    int fNumber;                 // Declare a variable to store the user's favorite number.
    int wholeNumber1, wholeNumber2; // Declare variables for two whole numbers.

    // Display a welcome message and ask for the user's name.
    cout << "********** Welcome to Programming Event **********" << endl;
    cout << "Hello! What's your name?" << endl;
    cin >> studentName; // Read the user's input and store it in studentName.

    // Ask for the user's favorite number.
    cout << "Tell me, " << studentName << ", what's your favorite number?" << endl;
    cin >> fNumber; // Read the user's input and store it in fNumber.

    // Perform calculations with the user's favorite number and display the results.
    cout << "Great choice! Here are some fun facts about the number " << fNumber << ":" << endl;
    cout << "Double of " << fNumber << " is " << 2 * fNumber << "." << endl;
    cout << "Half of " << fNumber << " is " << float(fNumber) / 2 << "." << endl;
    cout << "Square root of " << fNumber << " is approximately " << sqrt(fNumber) << "." << endl;

    // Ask the user for two whole numbers for division.
    cout << "Now, Alice, let's explore division. Give me a whole number." << endl;
    cin >> wholeNumber1;
    cout << "Now, give me another whole number." << endl;
    cin >> wholeNumber2;

    // Perform integer division and floating-point division, then display the results.
    cout << "Using integer division, " << wholeNumber1 << " divided by " << wholeNumber2 << " is " << wholeNumber1 / wholeNumber2 << "." << endl;
    cout << "Using integer division, " << wholeNumber1 << " divided by " << wholeNumber2 << " is approximately " << float(wholeNumber1) / wholeNumber2 << "." << endl;

    cout << endl;
    cout << endl;

    // Display a thank-you message and information about the programmer and project.
    cout << "Thank you for participating, " << studentName << "!" << endl;
    cout << "PROGRAMMER: " << NAME << endl;
    cout << "CMSC140 Project 1" << endl;
    cout << "Due Date: 09/21/2023" << endl;

    return 0; // Return 0 to indicate successful program execution.
}
