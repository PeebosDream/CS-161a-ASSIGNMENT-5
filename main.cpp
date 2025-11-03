// ------------- FILE HEADER -------------
// Author ✅: Phoenix Morgan
// Assignment ✅: 5
// Date ✅: 11/2/25
// Citations: zybooks.com


// ------------- ZYBOOKS SCORES -------------
// Chapter ✅: 5
// Participation ✅: 20
// Challenge ✅: 0
// Labs ✅: 100%


// ------------- DISCORD POSTS -------------
// https://discord.com/invite/URYKKf8YHm
// Count ✅:1
// Links (Optional): 


// ------------- DESIGN DOCUMENT -------------
// A. INPUT ✅: 
// B. OUTPUT ✅:
// C. CALCULATIONS ✅:
// D. LOGIC and ALGORITHMS ✅:
//    (Optional) flow chart link or file name: 


// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS ✅: yes
// (Optional) Additional tests count:   


// ------------- CODE -------------
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cctype>
using namespace std;

int main() {
    const int SLICES_PER_PIZZA = 8;
    const double TAX_RATE = 0.07;
    const double DELIVERY_RATE = 0.214;

    int entryCount = 0;
    int totalPizzasAll = 0;
    int maxPeople = 0;
    double maxTotalCost = 0.0;

    cout << "Welcome to my Pizza Party Statistics program!" << endl << endl;

    char continueProgram = 'y';

    cout.setf(ios::fixed);
    cout << setprecision(2);

    while (continueProgram == 'y' || continueProgram == 'Y') {

        int people;
        double avgSlicesPerPerson;
        double costPerPizza;

        cout << "Enter the number of people, average number of slices per person, and the cost of a pizza separated by a space: ";
        cin >> people >> avgSlicesPerPerson >> costPerPizza;

        double totalSlices = people * avgSlicesPerPerson;
        int pizzas = static_cast<int>(ceil(totalSlices / SLICES_PER_PIZZA));

        double pizzaCost = pizzas * costPerPizza;
        double tax = pizzaCost * TAX_RATE;
        double delivery = pizzaCost * DELIVERY_RATE;
        double totalCost = pizzaCost + tax + delivery;

        cout << endl;
        cout << "Number of pizzas: " << pizzas << endl;
        cout << "Cost of pizzas:  $" << pizzaCost << endl;
        cout << left << setw(15) << "Tax:" << right << " $" << tax << endl;
        cout << left << setw(15) << "Delivery:" << right << " $" << delivery << endl;
        cout << left << setw(15) << "Total Cost:" << right << " $" << totalCost << endl << endl;

        entryCount++;
        totalPizzasAll += pizzas;

        if (people > maxPeople) {
            maxPeople = people;
        }
        if (totalCost > maxTotalCost) {
            maxTotalCost = totalCost;
        }

        cout << "Do you want to enter more (y/n): ";
        cin >> continueProgram;
        cout << endl;
    }

    cout << "Number of entries: " << entryCount << endl;
    cout << "Total number of pizzas: " << totalPizzasAll << endl;

    cout << setprecision(1);
    double averagePizzas = static_cast<double>(totalPizzasAll) / entryCount;
    cout << "Average number of pizzas: " << averagePizzas << endl;

    cout << setprecision(2);
    cout << "Maximum number of people: " << maxPeople << endl;
    cout << "Maximum cost of pizzas: $" << maxTotalCost << endl << endl;

    cout << "Thank you for using my program!" << endl;
    return 0;
}


// Function implementations (if any)


// ------------- DESIGN -------------
/* 
Program Name: Pizza party statitistics program

Program Description: 

Design:
A. INPUT
Define the input variables including name data type. 

int people
double avgSlicesPerPerson
double costPerPizza

B. OUTPUT
Define the output variables including data types. 

double pizzaCost 
double tax 
double delivery
double totalCost 


C. CALCULATIONS
Describe calculations used by algorithms in step D.  
List all formulas. 
If there are no calculations needed, state there are no calculations.

    double totalSlices = people * avgSlicesPerPerson;
    int pizzas = static_cast<int>(ceil(totalSlices / SLICES_PER_PIZZA));

    double pizzaCost = pizzas * costPerPizza;
    double tax = pizzaCost * TAX_RATE;
    double delivery = pizzaCost * DELIVERY_RATE;
    double totalCost = pizzaCost + tax + delivery;

D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts. 
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs. 
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt


SET SLICES_PER_PIZZA to 8
SET TAX_RATE to 0.07
SET DELIVERY_RATE to 0.214


SET entryCount to 0
SET totalPizzasAll to 0
SET maxPeople to 0
SET maxTotalCost to 0

DISPLAY "Welcome to my Pizza Party Statistics program!"

SET continueProgram to 'y'

WHILE continueProgram equals 'y' OR continueProgram equals 'Y'

    DISPLAY "Enter the number of people, average number of slices per person, 
    and the cost of a pizza:"
    INPUT people, avgSlicesPerPerson, costPerPizza

    // Calculate number of pizzas
    SET totalSlices to people * avgSlicesPerPerson
    SET pizzas to ceiling(totalSlices / SLICES_PER_PIZZA)

    // Cost calculations
    SET pizzaCost to pizzas * costPerPizza
    SET tax to pizzaCost * TAX_RATE
    SET delivery to pizzaCost * DELIVERY_RATE
    SET totalCost to pizzaCost + tax + delivery

    // Output results
    DISPLAY "Number of pizzas:" pizzas
    DISPLAY "Cost of pizzas:" pizzaCost
    DISPLAY "Tax:" tax
    DISPLAY "Delivery:" delivery
    DISPLAY "Total Cost:" totalCost

    // Update stats
    SET entryCount to entryCount + 1
    SET totalPizzasAll to totalPizzasAll + pizzas

    IF people > maxPeople THEN
        SET maxPeople to people
    ENDIF

    IF totalCost > maxTotalCost THEN
        SET maxTotalCost to totalCost
    ENDIF

    DISPLAY "Do you want to enter more (y/n):"
    INPUT continueProgram

END WHILE


DISPLAY "Number of entries:" entryCount
DISPLAY "Total number of pizzas:" totalPizzasAll

SET averagePizzas to totalPizzasAll / entryCount
DISPLAY "Average number of pizzas:" averagePizzas

DISPLAY "Maximum number of people:" maxPeople
DISPLAY "Maximum cost of pizzas:" maxTotalCost

DISPLAY "Thank you for using my program!"


SAMPLE RUNS
Copy from assignment document.
Welcome to my Pizza Party Statistics program!

Enter the number of people, average number of slices per person, and the cost of a pizza separated by a space: 10  2.6  10.50

Number of pizzas: 4
Cost of pizzas:  $42.00
Tax:             $2.94
Delivery:        $8.99
Total Cost:      $53.93

Do you want to enter more (y/n): y

Enter the number of people, average number of slices per person, and the cost of a pizza separated by a space: 9   2.5   10.95

Number of pizzas: 3
Cost of pizzas:  $32.85
Tax:             $2.30
Delivery:        $7.03
Total Cost:      $42.18

Do you want to enter more (y/n): y

Enter the number of people, average number of slices per person, and the cost of a pizza separated by a space: 14   3.2   14.95

Number of pizzas: 6
Cost of pizzas:  $89.70
Tax:             $6.28
Delivery:        $19.20
Total Cost:      $115.17

Do you want to enter more (y/n): n

Number of entries: 3
Total number of pizzas: 13
Average number of pizzas: 4.3
Maximum number of people: 14
Maximum cost of pizzas: $115.17

Thank you for using my program!
*/
