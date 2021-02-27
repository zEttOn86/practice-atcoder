#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    string N;
    cin >> N;
    bool ans = false;
    for(auto c : N){
        if(c=='7') ans = true;
    }
    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}