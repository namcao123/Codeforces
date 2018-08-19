#include <iostream>
#include <iomanip> 
#include <string>

using namespace std;

int main()
{
	int n, m; cin >> n >> m;
	double min_price = 5000;
	double a, b;
	while(n)
	{
		cin >> a >> b;
		if (a/b < min_price)
		{
			min_price = a/b;
		}
		n--;
	}


	//setprecision(6)

	cout << setprecision(6) << min_price*m << endl;

	return 0;
}