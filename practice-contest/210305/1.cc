#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int a,b;
    cin >> a >> b;
    int ans = 0;
    int tap = 1;
    while(1){
        if(tap>=b) break;
        ans++;
        tap--;
        tap += (a);
    }
    cout << ans << endl;
    return 0;
}