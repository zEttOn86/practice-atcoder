#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int k;
    cin >> k;
    int a, b;
    cin >> a >> b;
    bool can = false;
    for(int i = a; i<=b;i++){
        if(i%k==0) can = true;
    }
    if(can) cout << "OK" << endl;
    else cout << "NG" << endl;
    return 0;
}