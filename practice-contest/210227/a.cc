#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    double a, b;
    cin >> a >> b;
    printf("%.20f\n", (a-b)/a * 100);
    return 0;
}