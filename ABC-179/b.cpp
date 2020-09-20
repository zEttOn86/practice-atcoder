#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n;
    int d1, d2;
    cin >> n;
    int ans = 0;
    int max_ans = 0;
    rep(i,n){
        cin >> d1 >> d2;
        if(d1 == d2) ans++;
        else{
            max_ans = max(max_ans, ans);
            ans = 0;
        }
    }
    max_ans = max(max_ans, ans);
    if(max_ans>=3) cout << "Yes" << endl;
    else cout << "No" << endl;

    
    return 0;
}