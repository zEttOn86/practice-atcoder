#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int N;
    cin >> N;
    vector<int> t(N), x(N), y(N);
    rep(i, N) cin >> t[i] >> x[i] >> y[i];
    int ts = 0;
    int xs = 0;
    int ys = 0;
    bool can = true;
    for(int i=0; i< N; i++){
        int dt = t[i] - ts;
        int dx = abs(x[i] - xs);
        int dy = abs(y[i] - ys);
        int dist = dx + dy;
        if((dt >= dist) && ((dt&1)==(dist&1))){
            can = true;
        }else{
            can = false;
        }
        ts = t[i];
        xs = x[i];
        ys = y[i];
    }
    if(can) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}