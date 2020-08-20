#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main()
{
    double r;
    cin >> r;
    double area, circumference;
    area = r * r * M_PI;
    circumference = 2 * r * M_PI;
    printf("%.6lf %.6lf\n", area, circumference);
    return 0;
}