#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> p(n);
    rep(i,n) cin >> p[i].first >> p[i].second;
    
    for(int i=n; i--;) for(int j=i; j--;) for(int k=j; k--;){
        int x1 = p[i].first;
        int y1 = p[i].second;
        int x2 = p[j].first;
        int y2 = p[j].second;
        int x3 = p[k].first;
        int y3 = p[k].second;

        x1 -= x3;
        x2 -= x3;
        y1 -= y3;
        y2 -= y3;
        if(x1 * y2 == x2*y1) {
            cout << i << " " << j << " " << k;
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}