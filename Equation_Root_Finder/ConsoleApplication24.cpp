#include <iostream>
using namespace std;
double poly(double x) {
	return (x * x * x) - (3 * (x * x)) - (x)+3;
}

int main()
{
	double n, a = -2, b = 4, left, right, step = 0.5, f_left, f_right;
	n = ceil((b - a) / step);
	left = a;
	
	for (int k = 1; k <= n; ++k)
	{
		f_left = poly(left);
		right = left + step;

		if (right > b) 
		{
			right = b;
		}

		f_right = poly(right);

		if (fabs(f_left) < 0.1e-04)
		{
			cout << "Root detected at " << left << endl;
		}

		else if (f_left * f_right < 0) 
		{
			cout << "Root detected at " << (left + right) / 2 << endl;
		}

		left = right;
	}

	if (fabs(f_right) < 0.1e-04)
	{
		cout << "Root detected at " << right << endl;
	}
	return 0;
}