#include <iostream>
#include <fstream>
#include <queue>
#include <cmath>
using namespace std;
int main()
{
	int integers;
	queue<int> aqueue;
	cout << "Enter a few integers ";
	cin >> integers;
	while (!cin.eof())
	{
		if (integers % 2 == 1)
		{
			aqueue.push(integers);
		}
		cin >> integers;
	}

	queue<int>aqueue_copy{ aqueue };
	
	while (!aqueue_copy.empty())
	{
		cout << aqueue_copy.front() << endl;
		aqueue_copy.pop();
	}
}