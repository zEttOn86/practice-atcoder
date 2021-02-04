#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    vector<int> a(3);
    rep(i, 3) cin >> a[i];
    int ans = 0;
    while(1){
        sort(a.begin(), a.end());
        int max_val = a[2];
        if(a[0]==max_val && a[1]==max_val){
            break;
        }
        else if(a[0]<max_val && a[1]<max_val){
            a[0]++;
            a[1]++;
            ans++;
        }else if(a[0]<max_val){
            a[0]+=2;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}