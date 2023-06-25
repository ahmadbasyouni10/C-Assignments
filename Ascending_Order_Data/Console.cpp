#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int const n = 8;
	int x[n] = { 1, 0, 5, 3, 4, 2, 7, 6 };
	int y[n] = { 45, 48, 56, -1, 10, 8, -4, 12 };
	int hold, min_index;

	cout << "x\t\ty" << endl;

	for (int k = 0; k < n; ++k)
	{
		min_index = k;
		
		for (int j = k + 1; j < n; ++j)
		{
			if (x[j] < x[min_index])
				min_index = j;
		}

		hold = x[min_index];
		x[min_index] = x[k];
		x[k] = hold;

		hold = y[min_index];
		y[min_index] = y[k];
		y[k] = hold;

		cout << x[k] << "\t\t " << y[k] << endl;
	}
}
