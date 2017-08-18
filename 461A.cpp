#include <iostream>
#include <algorithm>

using namespace std;

long long n, m, i, res, d[300005];

int main()
{
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> d[i];
  }

  sort(d, d+n);
  for (i = 0; i < n; i++)
  {
    res += d[i]*min(i+2,n);
  }
  cout << res << endl;
  return 0;
}
