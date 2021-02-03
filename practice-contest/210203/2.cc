#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<ll> A(n+100);
    rep(i,n) cin >> A.at(i);

    int ans = 0;
    for(int i = 0; i<n; i++){
        ans++;
        while(i+1 < n && A[i] ==A[i+1]) i++;

        if(A[i] < A[i+1]){
            while(i+1<n && A[i] <= A[i+1]) i++;
        }else{
            while(i+1<n && A[i] >= A[i+1]) i++;
        }
    }
    cout << ans << endl;
    return 0;
}