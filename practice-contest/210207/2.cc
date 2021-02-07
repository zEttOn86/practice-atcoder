#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int v, t, s, d;
    cin >> v >> t >> s >> d;
    // int time = d / v;
    if(t*v<= d && d <=s*v) cout << "No" << endl;
    else cout << "Yes" << endl;

    return 0;
}