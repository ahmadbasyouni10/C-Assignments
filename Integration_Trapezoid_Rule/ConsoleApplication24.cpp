#include <iostream>
#include <cmath>
using namespace std;

double integrate(double a, double b, int n);
double f(double x);

int main()
{
	int num_trapezoids;
	double a, b, area;
	cout << "Enter the interval endpoints, a and b\n";
	cin >> a >> b;
	cout << "Enter the number of trapezoids\n";
	cin >> num_trapezoids;
	area = integrate(a, b, num_trapezoids);

	cout << "Using " << num_trapezoids << " trapezoids, the estimated area is " <<
		(1.0 / 2.0) * area << endl << endl;

	return 0;
}

double integrate(double a, double b, int n)
{
	double sum(0), x = a, base, area;
	base = (b - a) / n;
	
	for (int k = 2; k <= n; ++k)
	{
		x = x + base;
		sum = sum + f(x);
	}

	area = 0.5 * base * (f(a) + 2 * sum + f(b));
	return area;
}

double f(double x)
{
	return(1 - cos(2 * x));
}