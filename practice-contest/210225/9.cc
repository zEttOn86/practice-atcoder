#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    sort(a.begin(), a.end());
    int ans;
    int max_cnt = -1;
    for(int i=2; i<=a[n-1];i++){
        int cnt = 0;
        rep(j, n){
            if(a[j]%i==0) cnt++;
        }
        if(max_cnt < cnt){
            max_cnt = cnt;
            ans = i;
        }
    }
    cout << ans << endl;
    return 0;
}