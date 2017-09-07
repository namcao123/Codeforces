
#include <iostream>
#include <string>

using namespace std;

int main()
{
  int n, k; cin >> n >> k;
  int a[200005];
  for (int i = 0; i < n; i++)
  cin >> a[i];
  int mn = 0, sel = 0, index = 1;
  for (int i = 0; i < k; i++)
  {mn += a[i]; sel += a[i];}
  for (int i = k; i < n; i++)
  {
    sel += a[i] - a[i-k];
    if( sel < mn) 
        {
            mn = sel;
            index = i-k+2;
        }
  }
  cout << index << endl;
  return 0;
}
