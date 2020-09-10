#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

typedef struct {
    double x,y;
} Point;

int main()
{
    Point p1, p2;
    cin >> p1.x >> p1.y >> p2.x >> p2.y;
    double ans;
    ans = sqrt((p1.x-p2.x)*(p1.x-p2.x) + (p1.y - p2.y)*(p1.y - p2.y));
    printf("%f\n", ans);
    return 0;
}