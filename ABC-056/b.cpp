#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;
int main()
{
    int W, a, b;
    cin >> W >> a >> b;
    int left = min(a, b);
    int right = max(a, b);
    if(right - (left + W) >= 0){
        cout << right - (left + W) << endl;
    }else{
        cout << 0 << endl;
    }

    return 0;
}