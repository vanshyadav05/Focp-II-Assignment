#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()

using namespace std;

int main() {

    // Variable to store the user's name
    string name;

    // Ask the user for their name
    cout << "==============================" << endl;
    cout << "     FUNNY ROAST GENERATOR    " << endl;
    cout << "==============================" << endl;

    cout << "Enter your name: ";
    getline(cin, name);

    // Check if the user entered an empty name
    if (name.empty()) {
        cout << "Please enter a valid name!" << endl;
        return 0;
    }

    // Store roast messages inside a vector
    vector<string> roasts = {

        name + ", your coding skills scare the compiler.",

        name + ", even your calculator needs help solving your math.",

        name + ", your brain loads slower than hotel Wi-Fi.",

        name + ", you study like software terms and conditions..."
               " everyone skips it.",

        name + ", your bugs have bugs.",

        name + ", if laziness had a brand ambassador,"
               " it would be you.",

        name + ", your logic is under maintenance.",

        name + ", even autocorrect stopped helping you.",

        name + ", you are proof that Google cannot fix everything.",

        name + ", your keyboard works harder than you."
    };

    // Seed the random number generator
    // This makes the output different every time the program runs
    srand(time(0));

    // Generate a random index
    int randomIndex = rand() % roasts.size();

    // Display random roast
    cout << "\n🔥 Your Roast 🔥" << endl;
    cout << roasts[randomIndex] << endl;

    cout << "\nThanks for using the Roast Generator!" << endl;

    return 0;
}