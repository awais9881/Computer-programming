// Name: M.Awais
// Department: Electrical Engineering (POWER)
// Registration No: BF25NWELE0732
// Section: A

#include <iostream>
using namespace std;

int main()
{  
  int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; i++)
	{
        for(int j = 1; j <= i; j++)
    {
            cout << "*";
        }
        cout << endl;
    }

    return 0;

}

