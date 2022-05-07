// Sheet metal usage calculator.
// This program should make area calculations based on entered sheet size 
// (length and width) and then the program will calculate how many parts of a specific size (length and width). 

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main();
std::cin >> 
std::cout << std::setiosflags(ios::fixed)<<setprecision(4)

// declare functions
double dec_pl(double nmbr, int pwr);

// declare variables
double nmbr = 0.0;
double pwr = 1;
double returned = 0.0;

// here is where the work is done
double dec_pl(double nmbr, double pwr)
{
	double number1 = 0.0;
	int number2 = 0;
	double number3 = 0.0;
	double power = pow(10, pwr);
	number1 = nmbr * power;
	cout << "number1 = nmbr * power = " << number1 << endl;
	number2 = (static_cast<int>(number1));
	cout << "number2 = (static_cast<int>(number1)) = " << number2 << endl;
	number3 = (static_cast<double>(number2)) / power;
	cout << "number3 = (static_cast<double>(number2)) / power = " << number3 << endl;
	return number3;
}

// and here is main()
int main()
{
	cout << "Enter length of sheet in inches: ";
	cin >> nmbr;
	cout << "\nEnter width of sheet in inches: ";
	cin >> pwr;
	returned = dec_pl(nmbr, pwr);
	cout << endl << returned << endl << endl;
	return 0;
}