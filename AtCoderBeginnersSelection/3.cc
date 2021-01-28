#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    string s;
    cin >> s;
    int res = 0;
    for(auto t : s){
        res += t - '0';
    }
    cout << res << endl;
    return 0;
}