#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main()
{
    int x, y;
    while (1)
    {
        cin >> x >> y;
        if (x == 0 && y == 0)
            break;
        if (x > y)
            cout << y << " " << x << endl;
        else
            cout << x << " " << y << endl;
    }
    return 0;
}