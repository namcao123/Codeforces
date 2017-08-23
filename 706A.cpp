#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  //intput the cordinate of user
  int a, b;  cin >> a >> b;
  int n;//number of taxi
  cin >> n;
  //assign coridnate and velocity of taxi
  int x, y, v;
  float min = 9999;
  float t;
  // calculate time
  for (int i = 0; i < n; i ++)
  {
    cin >> x >> y >> v;
    int  s;
    s = pow(x-a,2) + pow(y-b,2);

    t = sqrt(s)/v;
    if ( min > t)
    min = t;
  }

  printf("%.9f\n",min);
}
