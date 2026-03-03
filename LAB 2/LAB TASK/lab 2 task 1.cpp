#include <iostream>
using namespace std;

int main() 
{   
    int a = 10;
    float b = 5.5;
    double c = 12.3456;
    char d = 'A';
    bool e = false;
    //taken variables(a,b,c,d,e) for integer value,size and address

    cout << "Integer value: " << a << endl;
    cout << "Size: " << sizeof(a) << " bytes" << endl;
    cout << "Address: " << &a << endl << endl;

    cout << "Float value: " << b << endl;
    cout << "Size: " << sizeof(b) << " bytes" << endl;
    cout << "Address: " << &b << endl << endl;

    cout << "Double value: " << c << endl;
    cout << "Size: " << sizeof(c) << " bytes" << endl;
    cout << "Address: " << &c << endl << endl;

    cout << "Char value: " << d << endl;
    cout << "Size: " << sizeof(d) << " bytes" << endl;
    cout << "Address: " << (void*)&d << endl << endl;

    cout << "Bool value: " << e << endl;
    cout << "Size: " << sizeof(e) << " bytes" << endl;
    cout << "Address: " << &e << endl;

    return 0;//program succesfully ended
}