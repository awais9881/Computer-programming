// Name: M.Awais
// Department: Electrical Engineering (POWER)
// Registration No: BF25NWELE0732
// Section: A

#include <iostream> // Include input-output library
using namespace std; // Use standard namespace

int main() 
// Main function
	{
    char grade; 
	// Declare variable to store grade

    cout << "Enter grade (A, B, C, D, F): "; // Ask for grade
    cin >> grade; 
	// Take input

    switch(grade) 
	// Start switch statement
    {
        case 'A':
            cout << "Excellent";
            break;

        case 'B':
            cout << "Very Good";
            break;

        case 'C':
            cout << "Good";
            break;

        case 'D':
            cout << "Pass";
            break;
		
        case 'E':
            cout << "Barely Pass";
            break;
		
        case 'F':
            cout << "Fail";
            break;

        default: 
		// If invalid character entered
            cout << "Invalid Grade";
    }

    return 0; 
	// End program
	}
