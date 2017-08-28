#include <iostream>

using namespace std;

int a[1000010];
long long cnt[1000010];
int main()
{
  int n; cin >> n;

  long long sum;

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    sum += a[i];
  }

  if (sum%3 != 0) cout << "0";
  else
  {
    sum /= 3;
    long long ss = 0;
    for (int i = n-1; i >=0; i--)
    {
      ss += a[i];
      if ( ss == sum) cnt[i] = 1;
    }

    for (int i = n-2; i >=0; i--)
    cnt[i] += cnt[i+1];

    long long ans = 0;
    ss = 0;
    for (int i = 0; i+2 <n; i++)
    {
      ss += a[i];
      if (ss ==sum ) ans += cnt[i+2];
    }
    cout << ans << endl;
  }
  return 0;
}
