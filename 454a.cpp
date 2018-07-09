#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n; cin >> n;

	for (int i = 0; i < n; i ++)
	{
		for (int j = 0; j < n; j ++)
		{
			if (i + j < n/2 | abs(i - j) > n/2 | i+j+1 > 3*n/2 )
				cout << "*";
			else
				cout << "D";
		}
		cout << endl;
	}

	return 0;
}