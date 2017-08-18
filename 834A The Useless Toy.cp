#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

pair<int, int> p;


int main()
{
    int n; cin >> n;
    int a[n + 5];
    int i;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        p.first = a[i];
        p.second = i;
    }
    
    sort (p, p +n);
    
    for (i = 0; i < n; i ++)
        cout << p.second << " ";

    return 0;
}
