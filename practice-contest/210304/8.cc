#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int a, b, c, d;
    cin >> a >> b>> c >> d;
    bool can = false;
    while(1){
        c -= b;
        if(0>=c){can=true; break;}
        a -= d;
        if(0>=a) break;
    }
    if(can) cout<< "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}