//program for finding a person is eligable for PM seat or not 
#include <iostream>
using namespace std;
int main() {
    int num;
    
    cout << ("Enter age: ");
    cin  >>  num;

    // Check if number is greater than 18 
    if (num > 18 ) // condition 1 if num is greater than 0
    {
    cout <<    ("The person is eligable for PM seat.\n"); // display if condition 1 satisfies
    }
    else  // condition 2 if condition 1 doesn't satisfies 
    {
        cout << ("The person is not eligable for PM seat.\n"); // display if condition 1 doesn't satisfies
    }

    return 0;//program ended successfully
}