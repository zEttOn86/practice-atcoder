#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int w, h, x, y, r;
    cin >> w >> h >> x >> y >> r;
    if(r<=y && y<=h-r && r<=x && x <= w-r) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}