#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int X, Y;
    cin >> X >> Y;
    if(abs(X-Y)<3){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}