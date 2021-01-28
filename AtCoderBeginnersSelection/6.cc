#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    ll res = 0;
    for(int i = 0; i<=n; i++){
        int temp = i;
        int sum = 0;
        while(temp>0){
            sum += temp%10;
            temp/=10;
        }
        if(a<=sum && b>=sum){
            res+=i;
        }
    }
    cout << res << endl;
    return 0;
}