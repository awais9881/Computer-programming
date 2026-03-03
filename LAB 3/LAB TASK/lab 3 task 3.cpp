//program for finding wether a number is positive or negative 
#include <iostream>
using namespace std;
int main() {
    int num;
    
    cout << ("Enter an integer: ");
    cin  >>  num;//user will enter an integer

    
    if (num > 0 )  // condition 1 if num is greater than 0
    {
    cout <<    ("The number is positive.\n"); // display if condition 1 satisfies
    }
    else // condtion 2 if condition 1 doesn't satisfies
    {
        cout << ("The number is negative.\n"); // display if condition 1 doesn't satisfies
    }

    return 0;
}