#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

double rand_float(double a, double b);

int main()
{
	unsigned int seed;
	int a, b;
	cout << "Enter a positive integer seed value: \n";
	cin >> seed;
	srand(seed);
	int counter(1);

	cout << "Enter integer limits a and b (a<b): \n";
	cin >> a >> b;

	cout << "Random Numbers: \n";
	
	do
	{
		cout << rand_float(a, b) << ' ';
		++counter;
	} while (counter <= 10);

	cout << endl;
	return 0;
}

double rand_float(double a, double b)
{
	return ((double)rand() / RAND_MAX) * (b - a) + a;
}
