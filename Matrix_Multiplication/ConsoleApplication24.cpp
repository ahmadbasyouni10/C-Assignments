#include <iostream>
using namespace std;

int main()
{
	int const M = 3, N = 2, P = 2, L = 3;
	int C[M][N] = { 3,2,-1,-2,0,2 };
	int B[N][P] = { -2,2,-1,5 };
	int CB[M][P];
	int C_[3][2] = { 3,2,-1,-2,0,2 };
	int CT[2][3];
	int CBCT[3][3];

	cout << "(CB)*CT = " << endl;

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			CT[j][i] = C_[i][j];
		}
	}

	for (int i = 0; i < M; ++i)
	{
		for (int j = 0; j < P; ++j)
		{
			CB[i][j] = 0;

			for (int k = 0; k < N; ++k)
			{
				CB[i][j] += C[i][k] * B[k][j];
			}
		}
	}

	for (int i = 0; i < M; ++i)
	{
		for (int j = 0; j < L; ++j)
		{
			CBCT[i][j] = 0;
			for (int k = 0; k < N; ++k)
			{
				CBCT[i][j] += CB[i][k] * CT[k][j];
			}

			cout << CBCT[i][j] << '\t';
		}
		cout << endl;
	}
	return 0;
}