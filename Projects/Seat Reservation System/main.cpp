#include <iostream>

using namespace std;

// Main Menu Function
int mainMenu()
{
    cout << "-----------------------------------------------------" << endl;
    cout << "       Welcome to Airplane Reservation System" << endl;
    cout << "-----------------------------------------------------" << endl;

    cout << "1. Book First Class Seats" << endl;
    cout << "2. Book Business Class Seats" << endl;
    cout << "3. Book Economy Class Seats" << endl;
    cout << "4. View Airplane Seating Plan" << endl;
    cout << "5. View Fare(s)" << endl;
    cout << "6. System Reset" << endl;
    cout << "7. Exit from The Booking System" << endl;

    int choice;

    while (choice < 1 || choice > 7)
    {
        cout << "Invalid Choice" << endl;
        cout << endl
             << "Enter Menue Number to Continue:  ";
        cin >> choice;
    }

    return choice;
}

int main()
{
    const int firstClass = 1,
              businessClass = 2,
              economyClass = 3,
              seatingPlan = 4,
              checkFare = 5,
              reset = 6,
              exit = 7;

    int choice = mainMenu(),
        seats[12][7] = {
            {0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0}};

    switch (choice)
    {
    case firstClass:
        /* code */
        break;
    case businessClass:
        /* code */
        break;
    case economyClass:
        /* code */
        break;
    case seatingPlan:
        /* code */
        break;
    case checkFare:
        /* code */
        break;
    case reset:
        /* code */
        break;
    case exit:
        /* code */
        break;

    default:
        cout << "Unexpected error occurred. Please try again.\n";
        break;
    }

    // cout << choice;

    return 0;
}