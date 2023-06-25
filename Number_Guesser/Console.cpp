
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
	int input_;
	int a(1);
	int b(15);
	int result_;
	int i;

	result_ = rand_int(a, b);

	cout << result_ << endl;

	for (i = 1; i <= 5; ++i)
	{
		cout << "Guess the number from 1 to 15 ";
		cin >> input_;

		if (input_ == result_)
		{
			cout << "You won" << endl;
			break;
		}

		else if (input_ == (result_ + 1) || (input_ == result_ - 1))
		{
			cout << "Very close" << endl;
		}
		else if (input_ == (result_ + 2) || (input_ == result_ - 2))
		{
			cout << "Getting close" << endl;
		}
		else
		{
			cout << "Not close" << endl;
		}

	}

	if (i > 5)
	{
		cout << "Number of attempts=5. You lost";
	}

}

int rand_int(int a, int b)
{
	return rand() % (15 - 1 + 1) + 1;
}
