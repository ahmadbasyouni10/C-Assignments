#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main()
{
	double num[18];
	double sum(0), average, deviation_, deviationsquared_, sumdev(0), variance_,
		standard_deviation;
	ifstream data("data.txt");
	if (data.fail())
	{
		cerr << "Error opening input file" << endl;
		exit(1);
	}
	for (int i = 0; i < 18; ++i)
	{
		data >> num[i];
		sum += num[i];
	}
	average = sum / 18;
	for (int i = 0; i < 18; ++i)
	{
		deviation_ = num[i] - average;
		deviationsquared_ = deviation_ * deviation_;
		sumdev += deviationsquared_;
	}
	variance_ = (sumdev) / (18 - 1);
	standard_deviation = sqrt(variance_);
	cout << "The mean is " << average << endl;
	cout << "The standard deviation is " << standard_deviation << endl;
	cout << "The variance is " << variance_ << endl;
}
