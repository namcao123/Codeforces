#include<iostream>

long x[102], y[102], i, j, k, n, a;
bool u[102];

//function to check visited point
void f(long long aa)
{
    long z;
    u[aa] = true;
    for (z = 0; z < n; z++)
    {       //!u[z] mean u[z] = false;
            //if point is not visited and meet the condition
            if (!u[z] && (x[z] == x[aa] || y[z] == y[aa]))
            f(z);
    }
    
}
using namespace std;

int main()
{
    int n ; cin >> n;
    for (int i = 0; i < n; i++)
        cin >> x[i] >> y[i];
    for (i = 0; i < n; i++)
    if (!u[i])
    {
        a++;
        f(i);
    }
    cout << a - 1 << endl;
}