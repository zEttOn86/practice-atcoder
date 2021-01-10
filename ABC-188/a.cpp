#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int X, Y;
    cin >> X>> Y;
    bool res = false;
    if(X < Y){
        if(X + 3 > Y) res = true;
    }
    else
    {
        if(Y + 3 > X) res = true;
    }

    if(res) cout << "Yes" << endl;
    else cout << "No" << endl;
    
    return 0;
}