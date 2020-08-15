#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<ll> l(n);
    rep(i, n) cin >> l[i];
    sort(l.begin(), l.end());
    // vector<ll> org_l(l);
    // l.erase(std::unique(l.begin(), l.end()), l.end());
    int ans = 0;
    for(int i=0; i<l.size(); i++){
        ll a = l[i];
        for(int j=i+1; j<l.size(); j++){
            ll b = l[j];    
            if(a==b) continue;
            for(int k=j+1;k<l.size(); k++){
                ll c = l[k];
                if(b==c || a==c) continue;
                if(a+b>c&&a+c>b&&b+c>a) ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}