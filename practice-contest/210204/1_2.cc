#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int a,b,c;
    cin >> a >> b>>c;
    int m = max(a,b);
    m = max(m, c);
    if(((3*m)&1)==((a+b+c)&1)){
        cout << (3*m-(a+b+c))/2 << endl;
    }else{
        cout << (3*(m+1)-(a+b+c))/2 << endl;
    }
    return 0;
}