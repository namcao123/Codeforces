#include <iostream>
#include <map>

using namespace std;

int main()
{
  map<int, bool> vert, horz;
  char b;
  int r, c; cin >> r >> c;
  for (int i = 0; i < r; i++)
  for (int j = 0; j < c; j++)
  {
      cin >> b;
      if (b == 'S')
      {
              vert[i] = true;
              horz[j] = true;
      }
  }
  cout << vert.size() << " " << horz.size() << endl;
  cout << r*c - vert.size()*horz.size() << endl;
  return 0;
}
