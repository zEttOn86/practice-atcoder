#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<int> x(n), y(n);
    rep(i, n) cin >> x[i];
    rep(i, n) cin >> y[i];
    double p1_ans = 0;
    double p2_ans = 0;
    double p3_ans = 0;
    double pinf_ans = -2000;

    rep(i,n){
        p1_ans += abs(x[i]-y[i]);
        p2_ans += (x[i]-y[i])*(x[i]-y[i]);
        p3_ans += (abs(x[i]-y[i]))*(abs(x[i]-y[i]))*(abs(x[i]-y[i]));
        pinf_ans = max(pinf_ans, (double)abs(x[i]-y[i]));
    }
    p2_ans = sqrt(p2_ans);
    p3_ans = pow(p3_ans, 1./3.);

    printf("%f\n", p1_ans);
    printf("%f\n", p2_ans);
    printf("%f\n", p3_ans);
    printf("%f\n", pinf_ans);


    return 0;
}