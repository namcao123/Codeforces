#include <iostream>
#include <algorithm>
#include <string>
#include <set>
#include <vector>

using namespace std;
int n, m; 
int a[101]; 
bool b[101];
int t, cnt;

int main()
{
	

	cin >> n >> m;

	for (int i = 1; i <=n; i++)
	{
		cin >> t;
		if (!b[t])
		{
			b[t] = true;
			a[cnt++] = i;
		}
	}

	if (cnt < m) cout << "NO" << endl;
	else
		{
			cout << "YES" << endl;
			for (int i = 0; i < m; i++)
				cout << a[i] << " " ;
		}

	return 0;
}