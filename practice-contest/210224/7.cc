#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    bool can = false;
    int x = a;
    while(1){
        if(x%b==c){
            can = true;
            break;
        }
        
        x += a;
        if(x%b==0) {
            break;
        }
    }
    if(can) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}