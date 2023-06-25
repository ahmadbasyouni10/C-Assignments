#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	int numbers[10][3];
	char event[20];
	char task[20];
	char number_of_days[20];
	ifstream data("data.txt");
	double tasknmbr(0);
	double daysnmbr(0);
	data >> event >> task >> number_of_days;
	for (int i = 0; i < 10; ++i) {
		for (int j = 0; j < 3; ++j)
		{
			data >> numbers[i][j];
			cout << numbers[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < 10; ++i) {
		if (numbers[i][0] == 3)
		{
			tasknmbr += numbers[i][1];
			daysnmbr += numbers[i][2];
		}
	}
	cout << "Total number of tasks in event 3 is " << tasknmbr <<
		endl;
	cout << "Total number of days it takes to complete event 3 is "
		<< daysnmbr << endl;
}