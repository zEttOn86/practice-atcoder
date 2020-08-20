#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int cnt = 0;
    for (int i = a; i <= b; i++)
    {
        if (c % i == 0)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}