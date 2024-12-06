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
    firstClassSeats = 14, businessClassSeats = 14, economyClassSeats = 56;

const int first_Class = 1,
          business_Class = 2,
          economy_Class = 3,
          seating_Plan = 4,
          check_Fare = 5,
          reset_System = 6,
          exit_Menu = 7;

const int firstClassSeatPrice = 18000,
          businessClassSeatPrice = 14000,
          economicClassSeatPrice = 10000;

// Function for Count Available Seats

// void seatsCount()
// {
//     firstClassSeats = 0, businessClassSeats = 0, economyClassSeats = 0;
//     // First Class Seats
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 7; j++)
//         {
//             if (!(seats[i][j]))
//             {
//                 firstClassSeats++;
//             }
//         }
//     }

//     // Business Class Seats
//     for (int i = 2; i < 4; i++)
//     {
//         for (int j = 0; j < 7; j++)
//         {
//             if (!(seats[i][j]))
//             {
//                 businessClassSeats++;
//             }
//         }
//     }

//     // Economy Class Seats
//     for (int i = 4; i < 12; i++)
//     {
//         for (int j = 0; j < 7; j++)
//         {
//             if (!(seats[i][j]))
//             {
//                 economyClassSeats++;
//             }
//         }
//     }
// }

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
void displaySeatingPlan(int startCol, int endRow, string className)
{

    int availableSeats;

    if (className == "First Class")
    {
        availableSeats = firstClassSeats;
    }
    else if (className == "Business Class")
    {
        availableSeats = businessClassSeats;
    }
    else if (className == "Economy Class")
    {
        availableSeats = economyClassSeats;
    }

    cout << endl;
    cout << endl
         << availableSeats << " Seats Available in " << className << endl;

    for (int i = startCol; i < endRow; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            cout << (!(seats[i][j]) ? "[_]" : "[X]") << (j == 2 ? "   " : " ");
        }
        cout << endl;
    }
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
                    firstClassSeats--;
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
                    businessClassSeats--;
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
                    economyClassSeats--;
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

// GoTo Main Menu -> If user Wants
bool isContinue()
{
    bool isContinue;

    cout << endl
         << "Enter 1 to Continue, 0 to Exit.  ";
    cin >> isContinue;

    return isContinue;
}

// Function for Perform User Choice
bool handleChoice()
{
    int choice = mainMenu(),
        noOfSeatsToReserved;

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

        displaySeatingPlan(0, 1, "First Class");
        displaySeatingPlan(2, 4, "Business Class");
        displaySeatingPlan(4, 12, "Economy Class");

        if (isContinue())
        {
            handleChoice();
        }

        break;

    case check_Fare:

        cout << endl
             << "------------ Pricing Plan ------------" << endl;
        cout << endl
             << "First Class Seat: " << firstClassSeatPrice << endl;
        cout << "Business Class Seat: " << businessClassSeatPrice << endl;
        cout << "Economic Class Seat: " << economicClassSeatPrice << endl;

        if (isContinue())
        {
            handleChoice();
        }

        break;

    case reset_System:

        // Reset All Booked Seats
        for (int i = 0; i < 12; i++)
        {
            for (int j = 0; j < 7; j++)
            {
                seats[i][j] = 0;
            }
        }

        firstClassSeats = 14, businessClassSeats = 14, economyClassSeats = 56;
        cout << "System Reset Successfully." << endl;

        if (isContinue())
        {
            handleChoice();
        }

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