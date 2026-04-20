// Name: M.Awais
// Department: Electrical Engineering (POWER)
// Registration No: BF25NWELE0732
// Section: A

#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Enter a positive integer: ";
    cin >> num;

    for(int i = 1; i <= num; i++) {
        sum += i;
    }

    cout << "Sum from 1 to " << num << " = " << sum << endl;

    return 0;
}


