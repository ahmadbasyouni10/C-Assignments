#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	int num_data_pts(0);
	double time_, rainfall_, sum = 0;

	ifstream numbers("numbers.txt");
	ofstream report("report.txt");

	if (numbers.fail())
	{
		cerr << "file is not found";
		exit(0);
	}

	numbers >> time_ >> rainfall_;

	while (!numbers.eof())
	{
		if (rainfall_ > 2)
		{
			++sum;
		}
		numbers >> time_ >> rainfall_;
	}

	report.setf(ios::fixed);
	report.precision(1);
	report << "The time interval is: " << num_data_pts << endl;
	report << "Total raindrops above 2.0 is: " << sum << endl;
	numbers.close();
	report.close();
	return 0;

}