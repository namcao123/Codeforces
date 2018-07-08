#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s; int a, b;
	int n; cin >> n;
	while(n)
	{
		cin >> s >> a >> b;
		if (a >= 2400 & b > a)
		{
			cout << "YES" << endl;
			return 0;
		}
		n--;	
	}

	cout << "NO" << endl;

	return 0;
}