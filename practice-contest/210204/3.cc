#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int d = abs(a-b);
    if(d%2==0) cout << "Alice" << endl;
    else cout << "Borys" << endl;
    return 0;
}