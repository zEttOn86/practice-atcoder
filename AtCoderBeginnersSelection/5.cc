#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<=(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int A, B, C, X;
    cin >> A >> B >> C >>X;
    int res = 0;
    rep(a, A)rep(b, B)rep(c, C){
        int x =  500*a + 100*b + 50*c;
        if(X==x){
            res++;
        }
    }
    cout << res << endl;
    return 0;
}