#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<int> d(n);
    rep(i,n) cin >> d[i];
    sort(d.begin(), d.end(), greater<int>());

    int res = 1;
    int min_rad = d[0];
    rep(i, n){
        if(d[i] < min_rad){
            res++;
            min_rad = d[i];
        }
    }
    cout << res << endl;
    return 0;
}