#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int x, y;
    cin >> x >> y;
    if(abs(x-y) <3) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}