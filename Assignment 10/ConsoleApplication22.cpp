#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;
int main()
{
	int n(0);
	double x;
	double y;
	double sumx(0), sumy(0), sumx2(0), sumxy(0), denominator, m, b;
	double salinityinput_;
	double formula_;
	
	ifstream numbers("numbers.txt");
	ofstream salinity("salinity.txt");
	
	if (numbers.fail())
	{
		cerr << "File can't be found" << endl;
		exit(1);
	}
	
	numbers >> x >> y;
	
	while (!numbers.eof())
	{
		sumx += x;
		sumy += y;
		sumx2 += x * x;
		sumxy += x * y;
		++n;
		numbers >> x >> y;
	}
	
	denominator = sumx * sumx - n * sumx2;
	m = (sumx * sumy - n * sumxy) / denominator;
	b = (sumx * sumxy - sumx2 * sumy) / denominator;
	
	salinity.setf(ios:: fixed);
	salinity.precision(2);
	
	salinity << "Linear model: \n";
	salinity << "Freezing temperature = " << m << " salinity + " << b << endl;
	
	cout << "Enter salinity measurments seperated by whitespace" << endl;
	
	cin >> salinityinput_;
	salinity << "salinity(ppt)\t\tfreezingtemperature\n";
	
	while (!cin.eof())
	{
		formula_ = (m * salinityinput_) + b;
		salinity << salinityinput_ << setw(20) << formula_ << endl;
		cin >> salinityinput_;
	}
	numbers.close();
	salinity.close();
	return 0;
}