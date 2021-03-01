#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;
const int INF = INT_MAX;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> disk(m);
    rep(i, m) cin >> disk[i];

    vector<int> c(n+1);
    for(int i=1; i<=n; i++) c[i] = i;
    int now = 0;
    rep(i, m){
        int next = disk[i];
        for(int j=1; j<=n;j++){
            if(c[j] == next){
                swap(c[j], now);
                // c[j] = now;
                // now = next;
            }
        }
    }

    for(int i=1; i<=n; i++){
        cout<< c[i] << endl;
    }
    
    return 0;
}