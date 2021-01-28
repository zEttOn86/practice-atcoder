#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];
    int res = 0;
    bool flag = true;
    while(1){
        rep(i, n){
            if(a[i]%2==0){
                a[i] /= 2;
            }else{
                flag = false;
            }
        }
        if(flag){
            res++;
        }else{
            break;
        }
    }

    cout << res << endl;
    return 0;
}