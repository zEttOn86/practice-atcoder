#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    sort(a.begin(), a.end());
    vector<int> counter(100010);
    rep(i, n) counter[a[i]]++;

    int ans = 0;
    for(auto x : a){
        int temp = counter[x] + counter[x+1];
        if(x!=0) temp += counter[x-1]; 
        ans = max(temp, ans);       
    }
    cout << ans << endl;
    return 0;
}