#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    ll sum = 0;
    int minv = 1000000;
    int maxv = -1000000;
    int a;
    rep(i, n)
    {
        cin >> a;
        sum += a;
        if (minv > a)
            minv = a;
        if (maxv < a)
            maxv = a;
    }
    cout << minv << " " << maxv << " " << sum << endl;
    return 0;
}