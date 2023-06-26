#include <iostream>
using namespace std;
int main()
{
	double y[6] = { 1.0,2.2,14.3,7.5,9.1,10.5 };
	double* ptr = &y[0];
	double max;

	max = 0;

	for (int k = 0; k < 6; ++k)
	{
		if (*(ptr + k) > max)
		{
			max = (*(ptr + k));
		}
	}

	cout << "The max value is " << max << endl;
	return 0;
}
