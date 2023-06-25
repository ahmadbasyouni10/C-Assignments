#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main()
{
	int const n = 5;
	double x[5];
	double y[5];
	double resistanceformula[5];
	double hold;
	int min_index;
	char input[20];
	char voltage[20];
	char current[20];
	cout << "Enter the name of the text file: ";
	cin >> input;
	ifstream resistance(input);
	double maxvalue;
	double number1;
	double number2;
	resistance >> voltage >> current;
	cout << voltage << setw(15) << current << setw(20) << "Resistance(Ohm)" <<
		endl;
	for (int i = 0; i < 5; i++)
	{
		resistance >> x[i] >> y[i];
		resistanceformula[i] = x[i] / y[i];
		cout << x[i] << setw(20) << y[i] << setw(15) << resistanceformula[i] <<
			endl;
	}
	maxvalue = 0;
	for (int k = 0; k < n; ++k)
	{
		{
			if (resistanceformula[k] > maxvalue)
			{
				maxvalue = resistanceformula[k];
				number1 = x[k];
				number2 = y[k];
			}
		}
	}
	cout << "The maximum resistance is " << maxvalue << " Ohm at V = " << number1
		<< " V and I = " << number2 << " A";
}