#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n, c, k;
    cin >> n >> c >> k;
    vector<int> t(n);
    rep(i, n) cin >> t[i];
    sort(t.begin(), t.end());

    int ans = 0;
    for(int i = 0; i < n;){
        int cnt_person = 1;
        int first_person = t[i];
        while((cnt_person <= c) && (t[i] <= first_person+k)) {
            // cout << i << " " << cnt_person << " " << ans << endl;
            i++;
            cnt_person++;
        }
        ans++;
    }
    cout << ans << endl;
    return 0;
}