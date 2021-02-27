#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> d(n);
    rep(i,n) cin >> d[i].first >> d[i].second;
    bool res = false;
    int cnt = 0;
    for(auto p : d){
        if(p.first == p.second) cnt++;
        else cnt = 0;
        if(cnt>=3) res = true;
    }
    if(res) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}