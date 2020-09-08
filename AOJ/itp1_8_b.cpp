#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    string x;
    while(1){
        cin >> x;
        int ans = 0;
        if(x[0]=='0') break;
        rep(i,x.size()){
            ans += x[i]%'0';
        }
        cout << ans <<endl;
    }
    return 0;
}