#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main()
{
    int x, y, z, buf;
    cin >> x >> y >> z;
    if (x > y)
    {
        buf = x;
        x = y;
        y = buf;
    }
    if (y > z)
    {
        buf = y;
        y = z;
        z = buf;
    }
    if (x > y)
    {
        buf = x;
        x = y;
        y = buf;
    }
    cout << x << " " << y << " " << z << endl;

    return 0;
}