//program for finding wether the number is positive ,zero or negative 
#include <iostream>
using namespace std;
int main() {
    int num;
    
    cout << ("Enter an interger: ");
    cin  >>  num;//user will enter a number 

    
    if (num > 0  ) // condition 1 if num is greater than 0
    {
    cout <<    ("The num is positive.\n"); // display if condition 1 satisfies
    }
    else if (num < 0 ) // condition 2 if num is less than 0
    {
        cout << ("The number is negative.\n");} // display if condition 2 satisfies
    else // condition 3 if condition 1 & 2 does'nt satisfies
	{
	    cout << ("The number is zero.\n"); // display if condition 1 & 2 doesn't satisfies
    }

    return 0; // program ended succesfully 
}