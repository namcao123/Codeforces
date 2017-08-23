#include <iostream>

using namespace std;

int main()
{
  int n, m, i, j;
  cin >> n >> m;
  int count = 0;
  for (i = 0; i <= n; i++)
    for (j = 0; j <= n; j++)
    {
      if (i*i + j == n & i +j*j == m)
      count ++;
    }
    cout << count << endl;
    return 0;
}
