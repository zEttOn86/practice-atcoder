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
    int res = 0;
    for(int i=0; i<n ;i++){
        int min_a = a[i];
        for(int j = i; j<n; j++){
            min_a = min(min_a, a[j]);
            res = max(res, (j-i+1)*min_a);
        }
    }
    cout << res << endl;
    return 0;
}