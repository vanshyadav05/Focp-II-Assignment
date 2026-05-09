#include <iostream>
#include <vector>
#include <string>
#include <random>   // Modern random number generation
#include <limits>

using namespace std;

// Function to display a line separator
void printLine() {
    cout << "\n----------------------------------------\n";
}

int main() {

    // Vector containing creative college excuses
    vector<string> excuses = {
        "missed the deadline because the campus Wi-Fi crashed during submission.",
        "was working on the assignment all night, but the laptop suddenly updated and deleted everything.",
        "accidentally uploaded the wrong file after staying awake for 20 hours straight.",
        "could not complete the homework because the library closed unexpectedly during a power outage.",
        "spent the evening preparing for a surprise quiz in another subject.",
        "lost the assignment after spilling coffee on the notebook at 2 AM.",
        "had three project presentations in one day and completely lost track of time.",
        "was stuck debugging one semicolon error for five straight hours.",
        "thought the assignment was due next week after checking the wrong course portal.",
        "could not finish the work because the group project meeting lasted until midnight.",
        "had a system crash moments before saving the final version.",
        "was helping classmates prepare for exams and forgot to submit the homework.",
        "fell asleep in the study room while waiting for code to compile.",
        "accidentally submitted an old draft instead of the final assignment.",
        "spent hours fixing compiler errors caused by copying code from old notes."
    };

    string studentName;

    // Program Title
    cout << "========================================\n";
    cout << "     COLLEGE HOMEWORK EXCUSE GENERATOR\n";
    cout << "========================================\n";

    // Input Validation Loop
    while (true) {
        cout << "\nEnter student name: ";
        getline(cin, studentName);

        // Check if input is empty
        if (studentName.empty()) {
            cout << "Invalid input! Name cannot be empty.\n";
            continue;
        }

        // Check if name contains only spaces
        bool onlySpaces = true;

        for (char ch : studentName) {
            if (ch != ' ') {
                onlySpaces = false;
                break;
            }
        }

        if (onlySpaces) {
            cout << "Invalid input! Please enter a valid name.\n";
            continue;
        }

        break; // Valid input
    }

    // Modern random number generator
    random_device rd;
    mt19937 generator(rd());

    // Random index range
    uniform_int_distribution<int> distribution(0, excuses.size() - 1);

    // Generate random excuse
    int randomIndex = distribution(generator);

    // Output formatting
    printLine();

    cout << "\nOfficial Excuse Report\n";
    cout << "\nStudent: " << studentName << endl;

    cout << "\nExcuse:\n";
    cout << studentName << " " << excuses[randomIndex] << endl;

    printLine();

    cout << "\nThank you for using the Homework Excuse Generator!\n";

    return 0;
}