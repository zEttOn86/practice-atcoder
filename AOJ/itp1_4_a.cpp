#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main()
{
    int a, b;
    cin >> a >> b;
    int d, r;
    double f;
    d = a / b;
    r = a % b;
    f = (double)a / (double)b;
    printf("%d %d %.5lf\n", d, r, f);
    return 0;
}