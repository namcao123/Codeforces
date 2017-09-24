#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
  int n; cin >> n;
  double v; cin >> v;
  int k;
  double s[55];
  bool ok = false;
  
  vector<int> ans;
  int count = 0;
  for (int i = 1; i <= n; i++)
  {
      cin >> k;
      for (int j = 0; j < k; j++)
      {
            cin >> s[j];
            if (s[j] < v)
            ok = true;
      }
      
      if(ok)
      {
          count++;
          ans.push_back(i);
          ok = false;
      }
  }
  
  cout << count << endl;
  for (int i = 0; i < count ; i++)
  cout << ans[i] << " ";
  
}
