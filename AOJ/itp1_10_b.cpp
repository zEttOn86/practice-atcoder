#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    double s, l, h;
    h = b * sin(M_PI / 180. * c);
    s = 0.5 * h * a;
    l = a + b + sqrt((a-b*cos(M_PI / 180. * c))*(a-b*cos(M_PI / 180. * c)) + (h)*(h));
    printf("%f\n", s);
    printf("%f\n", l);
    printf("%f\n", h);
    return 0;
}