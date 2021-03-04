#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    string n;
    cin >> n;
    bool can = false;
    for(char c : n){
        if('7' == c) can = true;
    }
    if(can) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}