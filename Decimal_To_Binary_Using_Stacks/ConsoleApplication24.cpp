#include <iostream>
#include <fstream>
#include <queue>
#include <cmath>
#include <stack>
using namespace std;
int main()
{
	stack <int> astack;
	int number;
	cout << "Enter a value to find the binary representation: ";
	cin >> number;
	int quotient;
	int remainder(0);
	while (number > 0)
	{
		quotient = number / 2;
		remainder = number % 2;
		cout << "quotient " << quotient << "\t\t" << "remainder " << remainder
			<< endl;
		number = quotient;
		astack.push(remainder);
	}
	stack<int> astack_copy{ astack };
	while (!astack_copy.empty())
	{
		cout << astack_copy.top();
		astack_copy.pop();
	}
}