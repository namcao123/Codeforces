#include<iostream>

using namespace std;

int main()
{
  int n,d; cin >> n >> d;
  //n i number of oppoenent
  string s;
  bool win = false;
  int count = 0;
  int max = 0;
  for(int i = 0; i < d; i++)
  {
    cin >> s;
    for (int j = 0; j < s.length(); j ++)
      {
        if (s[j] == '0') win = true;
      }
      if(win)
      {
        count++;
        if (count > max) max = count;
      }
      else count = 0;
      win = false;
  }

  cout << max << endl;

  return 0;
}
