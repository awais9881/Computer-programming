#include <iostream>
using namespace std;
int main() {
    int num;
    
    cout << ("Enter an integer: ");
    cin  >>  num;

    // Check if number is greater than 0 and less than 100
    if (num > 0 && num < 100)//&& logical operator means "AND" 
	 // condition 1 execute if both condition satisfy  
    {
    cout <<    ("The number meets both conditions (greater than 0 and less than 100).\n"); //display if both condition satisfy 
    }
    else //condition 2 execute if conditions doesn't satisfy
    {
        cout << ("The number does NOT meet both conditions.\n"); //display if conditions doesn't satisfy
    }

    return 0;
}