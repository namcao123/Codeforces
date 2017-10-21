#include <bits/stdc++.h>

using namespace std;

int fl[100005], f=1, c1, c2;
vector <int> a[100005];

void fun (int x, int y) {
    
    fl[x] = y;
    if (y ==1) c1++;
    else c2++;
    for (int i = 0; i < a[x].size() && f; i ++)
    
        if(!fl[a[x][i]])
            fun(a[x][i],3-y);
            else if (fl[a[x][i]] == fl[x])
             f = 0;
}

int main()
{
    int i, j, k, l, n, m;
    cin >> n >> m;
    for (i = 0; i < m; i++)
    {
            cin >> j >> k;
            a[j].push_back(k);
            a[k].push_back(j);
    }
    
    for (i = 1; i <= n; i++)
        if (!fl[i])
            fun(i,1);
    if(f)
    {
            cout << c1 << endl;
            for (i = 0; i <= n; i ++)
                if(fl[i] == 1)
                    cout << i << " ";
            cout << endl;
            cout << c2 << endl;
            for (i = 1; i <= n; i++)
                if(fl[i] ==2)
                        cout << i << " ";
            cout << endl;
    }
    else
        cout << "-1 \n";
    return 0;
}