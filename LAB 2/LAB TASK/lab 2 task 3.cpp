//program for convertinng celsius to fahrenheit
#include <iostream>
using namespace std;
int main()
{
	
	
	float celsius, fahrenheit; 
	cout << "enter temperature in celsius:";
	cin >> celsius;                                   //enter temprature in celcius
	
	fahrenheit =(celsius*9/5)+32;                     //formula for convertimg celsius to fahrenheit
	cout <<"temperature in fahrenheit:"<< fahrenheit <<endl;
	return 0; // program ended sucessfully
}