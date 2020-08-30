#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    for (int i = n - 1; i >= 0; i--)
    {
        cout << a[i];
        if (i != 0)
        {
            cout << " ";
        }
    }
    cout << endl;
    return 0;
}