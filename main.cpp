// ------------- FILE HEADER -------------
// Author ✅: Ella Henner
// Assignment ✅:2
// Date ✅:10/5/2025
// Citations: 


// ------------- ZYBOOKS SCORES -------------
// Chapter ✅: 2
// Participation ✅: 89%
// Challenge ✅:71%
// Labs ✅:100%


// ------------- DISCORD POSTS -------------
// https://discord.com/invite/URYKKf8YHm
// Count ✅: 1
// Links (Optional): 


// ------------- DESIGN DOCUMENT -------------
// A. INPUT ✅: yes
// B. OUTPUT ✅: yes
// C. CALCULATIONS ✅: yes
// D. LOGIC and ALGORITHMS ✅: yes
//    (Optional) flow chart link or file name: 


// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS ✅: yes
// (Optional) Additional tests count:   2


// ------------- CODE -------------
#include <iostream>
#include <iomanip>

using namespace std;

// Function prototypes (if any)


// Main function
// https://en.cppreference.com/w/cpp/language/main_function.html
int main() {
    const int cookiesPerServing = 5;
    const int caloriesPerServing = 160;

    int oreosEaten = 0;
    double servings = 0.0;
    double calories = 0.0;

    cout << "Welcome to the one and only OREO Calculator!" << endl << endl;
    cout << "Enter the number of Oreos eaten (whole number): ";
    cin >> oreosEaten;
    cout << endl;

    servings = static_cast<double>(oreosEaten) / cookiesPerServing;
    calories = caloriesPerServing * servings;

    cout << fixed << showpoint << setprecision(1);

    cout << oreosEaten << " Oreos equals " << servings << " servings." << endl;
    cout << "You ate " << calories << " calories." << endl << endl;

    cout << "Yum! Don't let that slow you down!" << endl;

  return 0;
}

// Function implementations (if any)


// ------------- DESIGN -------------
/* 
Program Name: Oreo Calculator

Program Description:

Design:
A. INPUT
int oreosEaten = 0;

B. OUTPUT
double servings = 0.0;
double calories = 0.0;

C. CALCULATIONS
const int cookiesPerServing = 5;
const int caloriesPerServing = 160;

servings = static_cast<double>(oreosEaten) / cookiesPerServing;
calories = caloriesPerServing * servings;


D. LOGIC and ALGORITHMS
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt

MESSAGE "Welcome to the one and only OREO Calculator"

PROMPT "Enter the number of Oreos eaten (whole number): "
INPUT oreosEaten

DO CALCULATIONS
cout << fixed << showpoint << setprecision(1);

DATA oreosEaten
LABEL " Oreos equals "
DATA servings
LABEL " servings."

LABEL "You ate "
DATA calories
LABEL " calories."

MESSAGE "Yum! Don't let that slow you down!"

SAMPLE RUNS
Welcome to the Oreo Calculator!

Enter the number of Oreos eaten: 12

12 Oreos equals 2.4 servings!
You consumed 384.0 calories.

Keep eating Oreos!


Welcome to the Oreo Calculator!

Enter the number of Oreos eaten: 3

3 Oreos equals 0.6 servings!
You consumed 96.0 calories.

Keep eating Oreos!

*/