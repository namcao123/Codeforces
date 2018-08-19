#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int main()
{
	int n; cin >> n;
	int a[101];
	int max_gap = 0;
	for (int i = 0; i < n; i ++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < n; i ++)
	{
		if(abs(a[i+1] - a[i]) > max_gap)
			max_gap = abs(a[i+1] - a[i]);
	}




}