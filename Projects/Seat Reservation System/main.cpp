#include <iostream>

using namespace std;

int seats[12][7] = {
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
    {0, 0, 0, 0, 0, 0, 0}},
    firstClassSeats = 0, businessClassSeats = 0, economyClassSeats = 0;

const int first_Class = 1,
          business_Class = 2,
          economy_Class = 3,
          seating_Plan = 4,
          check_Fare = 5,
          reset_System = 6,
          exit_Menu = 7;

// Function for Count Available Seats
void seatsCount()
{
    firstClassSeats = 0, businessClassSeats = 0, economyClassSeats = 0;
    // First Class Seats
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (!(seats[i][j]))
            {
                firstClassSeats++;
            }
        }
    }

    // Business Class Seats
    for (int i = 2; i < 4; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (!(seats[i][j]))
            {
                businessClassSeats++;
            }
        }
    }

    // Economy Class Seats
    for (int i = 4; i < 12; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (!(seats[i][j]))
            {
                economyClassSeats++;
            }
        }
    }
}

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

    // Handle Wrong Choice
    while (choice < 1 || choice > 7)
    {

        cout << endl
             << "Enter Menue Number to Continue:  ";
        cin >> choice;

        if (choice < 1 || choice > 7)
        {
            cout << "Invalid Choice" << endl;
        }
    }

    return choice;
}

// Show Seats Available
void seatingPlan()
{
    bool isContinue;

    seatsCount();
    cout << endl;

    cout << endl
         << firstClassSeats << " Seats Available in First Class" << endl;

    // First Class Seats
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            cout << (!(seats[i][j]) ? "_" : "#") << (j == 2 ? "   " : " ");
        }
        cout << endl;
    }

    cout << endl
         << businessClassSeats << " Seats Available in Business Class" << endl;

    // Business Class Seats
    for (int i = 2; i < 4; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            cout << (!(seats[i][j]) ? "_" : "#") << (j == 2 ? "   " : " ");
        }
        cout << endl;
    }

    cout << endl
         << economyClassSeats << " Seats Available in Economy Class" << endl;

    // Economy Class Seats
    for (int i = 4; i < 12; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            cout << (!(seats[i][j]) ? "_" : "#") << (j == 2 ? "   " : " ");
        }
        cout << endl;
    }

    // cout << endl
    //      << "Enter 1 to Continue to Main Menu, 0 to Exit.";
    // cin >> isContinue;

    // if (isContinue)
    // {
    //     mainMenu();
    // }
}

// Function to Book First Class Seats
bool bookFirstClass(int noOfSeatsToReserved)
{
    int reserve = 0;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (reserve < noOfSeatsToReserved)
            {
                if (!(seats[i][j]))
                {
                    seats[i][j] = 1;
                    reserve++;
                }
            }
            else
            {
                break;
            }
        }
    }

    return true;
}

// Function to Book Business Class Seats
bool bookBusinessClass(int noOfSeatsToReserved)
{
    int reserve = 0;

    for (int i = 2; i < 4; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (reserve < noOfSeatsToReserved)
            {
                if (!(seats[i][j]))
                {
                    seats[i][j] = 1;
                    reserve++;
                }
            }
            else
            {
                break;
            }
        }
    }

    return true;
}

// Function to Book Business Class Seats
bool bookEconomyClass(int noOfSeatsToReserved)
{
    int reserve = 0;

    for (int i = 4; i < 12; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (reserve < noOfSeatsToReserved)
            {
                if (!(seats[i][j]))
                {
                    seats[i][j] = 1;
                    reserve++;
                }
            }
            else
            {
                break;
            }
        }
    }

    return true;
}

// Function for Perform User Choice
bool handleChoice()
{
    int choice = mainMenu(),
        noOfSeatsToReserved;

    seatsCount();

    // Choice Functions
    switch (choice)
    {
    case first_Class:

        // Ask from User -> No. Of Seats to Reserved - If Seats Available
        if (firstClassSeats > 0)
        {
            cout << endl
                 << firstClassSeats << " Seats Avaiable in First Class." << endl;
            cout << "Enter No. Of Seats to Reserved:  ";
            cin >> noOfSeatsToReserved;

            // Handle If User Entered Invalid Input
            if (noOfSeatsToReserved > 0 && noOfSeatsToReserved <= firstClassSeats)
            {
                bookFirstClass(noOfSeatsToReserved);

                if (bookFirstClass)
                {
                    cout << "Seats Reserved Successfully!" << endl;
                    handleChoice();
                }
            }
            else
            {
                cout << "Invalid Input." << endl;
                handleChoice();
            }
        }
        else
        {
            cout << "No Seats Avilable in First Class." << endl;
            handleChoice();
        }

        break;
    case business_Class:

        // Ask from User -> No. Of Seats to Reserved - If Seats Available
        if (businessClassSeats > 0)
        {
            cout << endl
                 << businessClassSeats << " Seats Avaiable in Business Class." << endl;
            cout << "Enter No. Of Seats to Reserved:  ";
            cin >> noOfSeatsToReserved;

            // Handle If User Entered Invalid Input
            if (noOfSeatsToReserved > 0 && noOfSeatsToReserved <= businessClassSeats)
            {
                bookBusinessClass(noOfSeatsToReserved);

                if (bookBusinessClass)
                {
                    cout << "Seats Reserved Successfully!" << endl;
                    handleChoice();
                }
            }
            else
            {
                cout << "Invalid Input." << endl;
                handleChoice();
            }
        }
        else
        {
            cout << "No Seats Avilable in Business Class." << endl;
            handleChoice();
        }

        break;
    case economy_Class:

        // Ask from User -> No. Of Seats to Reserved - If Seats Available
        if (economyClassSeats > 0)
        {
            cout << endl
                 << economyClassSeats << " Seats Avaiable in Economy Class." << endl;
            cout << "Enter No. Of Seats to Reserved:  ";
            cin >> noOfSeatsToReserved;

            // Handle If User Entered Invalid Input
            if (noOfSeatsToReserved > 0 && noOfSeatsToReserved <= economyClassSeats)
            {
                bookEconomyClass(noOfSeatsToReserved);

                if (bookEconomyClass)
                {
                    cout << "Seats Reserved Successfully!" << endl;
                    handleChoice();
                }
            }
            else
            {
                cout << "Invalid Input." << endl;
                handleChoice();
            }
        }
        else
        {
            cout << "No Seats Avilable in Economy Class." << endl;
            handleChoice();
        }

        break;
    case seating_Plan:

        seatingPlan();
        break;

    case check_Fare:
        /* code */
        break;
    case reset_System:
        /* code */
        break;
    case exit_Menu:
        cout << "System Exited Successfully." << endl;
        break;

    default:
        cout << "Unexpected error occurred. Please try again.\n";
        break;
    }
}

int main()
{
    handleChoice();

    return 0;
}