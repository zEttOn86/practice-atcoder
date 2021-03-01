#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int x, a ,b;
    cin >> x >> a >> b;
    int da = abs(x-a);
    int db = abs(x-b);
    if(da > db) cout << "B" << endl;
    else cout << "A" << endl;
    return 0;
}