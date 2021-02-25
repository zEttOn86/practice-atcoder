#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    double sx, sy, gx, gy;
    cin >> sx >> sy >> gx >> gy;
    printf("%.10f\n", (sx*gy+gx*sy) / (sy+gy)); 
    return 0;
}