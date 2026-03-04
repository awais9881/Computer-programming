// Name: M.Awais
// Department: Electrical Engineering (POWER)
// Registration No: BF25NWELE0732
// Section: A


#include <iostream> // Include input-output library
using namespace std; // Use standard namespace

int main() 
// Program execution starts here
	{
    int day; // Declare variable to store day number

    cout << "Enter day number (1-7): "; // Ask user for input
    cin >> day; // Take input from user

    switch(day) // Start switch statement
    {
        case 1: // If input is 1
            cout << "Monday"; // Display Monday
            break; // Exit switch

        case 2:
            cout << "Tuesday";
            break;

        case 3:
            cout << "Wednesday";
            break;

        case 4:
            cout << "Thursday";
            break;

        case 5:
            cout << "Friday";
            break;

        case 6:
            cout << "Saturday";
            break;

        case 7:
            cout << "Sunday";
            break;

        default: // If input is not between 1�7
            cout << "Invalid day number";
    }

    return 0; // End program successfully
	}



