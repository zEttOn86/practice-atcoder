#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n;
    while(1){
        cin >> n;
        if (n==0) break;
        vector<int> s(n);
        double mean = 0;
        rep(i, n) {
            cin >> s[i];
            mean += s[i];
        }
        mean /= n;
        double ans = 0;
        rep(i, n){
            ans += (s[i]-mean) * (s[i]-mean);
        }
        ans /= n;
        printf("%f\n", sqrt(ans));

    }
    return 0;
}