#include <iostream>

using namespace std;

int main()
{
  int a[4] = {};
  int i;
  for (i = 1; i <= 4; i ++)
  cin >> a[i];
  string s; cin >> s;
  int sum = 0;
  for (int j = 0; j < s.length(); j++)
  {
    s[j] = s[j] - '0';
    for (int i = 1; i <= 4; i++)
    {
      if (s[j] == i) sum += a[i];
    }
  }

  cout << sum << endl;

  return 0;
}
