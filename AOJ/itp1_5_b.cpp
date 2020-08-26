#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main()
{
    int h, w;
    while (1)
    {
        cin >> h >> w;
        if (h == 0 && w == 0)
            break;

        rep(i, h)
        {
            rep(j, w)
            {
                if (i == 0 || i == h - 1 || j == 0 || j == w - 1)
                    cout << "#";
                else
                    cout << ".";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}