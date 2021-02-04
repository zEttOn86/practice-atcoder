#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n){ cin >> a[i];}
    int even = 0;
    int odd = 0;
    rep(i,n){
        if((a[i]&1)==0) even++;
        else odd++;
    }
    // cout << even << " " << odd <<endl;
    if((odd&1)==1) cout <<"NO" <<endl;
    else cout << "YES" << endl;
    return 0;
}