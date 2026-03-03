//program for comparing two numbers
#include <iostream>
using namespace std;
int main() {
    int num1; // variable to store user input  
	int num2; // variable to store user input 
    
    cout << ("Enter two numbers: "); // tells the user to enter two numbers
    
    cin  >>  num1; // read the first number from user and store it in num 1
    cin >> num2;   // read the second number and store it in num 2

    
    if (num1 > num2 ) // conditio (1) if num 1 is greater than num 2 
    {
        cout <<    ("The number is greater then other.\n"); // displays if condition 1 satisfies
    }
    if (num1 == num2) // condtion (2) if num 1 is equal to num 2
    {
        cout << ("The numbers are equal.\n"); // displays if condition 2 satisfies
		}
    else // condition (3) if condition 1 & 2 does'nt satisties
	{
	    cout << ("The number is less then other number.\n"); // displays if condition 1 & 2 not satisfies
    }

    return 0; // program succesfully ended
}