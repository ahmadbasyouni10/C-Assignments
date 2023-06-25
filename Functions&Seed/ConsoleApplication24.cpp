#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int rand_int(int a, int b);

int main()
{
	unsigned int seed;
	cout << "Enter a positive integer seed value: ";
	cin >> seed;
	srand(seed);
	int rolls_;
	int a(1);
	int b(6);
	int numbers_1(0);
	int numbers_2(0);
	int numbers_3(0);
	int numbers_4(0);
	int numbers_5(0);
	int numbers_6(0);
	int t;

	cout << "Enter number of rolls: ";
	cin >> rolls_;
	cout << "roll#\t\tNumber of Dots\n";

	for (int i = 1; i <= rolls_; ++i)
	{
		t = rand_int(a, b);
		cout << setw(5) << i << setw(5) << t << endl;
		switch (t)
		{
		case 1:
			++numbers_1;
			break;
		case 2:
			++numbers_2;
			break;
		case 3:
			++numbers_3;
			break;
		case 4:
			++numbers_4;
			break;
		case 5:
			++numbers_5;
			break;
		case 6:
			++numbers_6;
			break;
		}
	}

	cout << "Number of one dot: " << numbers_1 << endl;
	cout << "Number of two dots: " << numbers_2 << endl;
	cout << "Number of three dots: " << numbers_3 << endl;
	cout << "Number of four dots: " << numbers_4 << endl;
	cout << "Number of five dots: " << numbers_5 << endl;
	cout << "Number of six dots: " << numbers_6 << endl;
}
int rand_int(int a, int b)
{
	return rand() % (6 - 1 + 1) + 1;
}