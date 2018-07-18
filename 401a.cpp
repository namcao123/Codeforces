#include <iostream>

using namespace std;

int main()
{
	int n,x; cin >> n >> x;
	int q, ans;
	int sum = 0;
	for (int i = 0; i < n; i ++)
		{
			cin >> q;
			sum += q;
		}
	sum = abs(sum);
	ans = sum/x;

	if (sum %x !=0) ans++;
	cout << ans << endl;
	return 0;
}