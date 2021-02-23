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
    int ans = 0;
    for(int i=0; i<n;){
        int cnt = 1;
        int num = a[i];
        while(1){
            i++;
            if(num == a[i]) cnt++;
            else break;
        }
        if(cnt%2!=0) ans++;
    }

    cout << ans << endl;
    return 0;
}