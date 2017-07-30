#include <iostream>
#include <string>

using namespace std;
char a[] = {'v','<','^','>'};

char c,t;
int n, p, q;

int main()
{
    cin >> c >> t >> n;
    n %= 4;
    if (n == 2 || n == 0)
        return cout << "undefined", 0;
    for (int i = 0; i < 4; i++)
    {
        if(s[i] == c)
            p = i;
        else if (s[i] == t)
            q = i;
        if ((p+n)%4 = q)
            cout << "cw" << endl;
        else cout << "ccw" << endl;
    
    }

    return 0;
}
