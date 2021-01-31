#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<pair<int, int>> cond(M);
    rep(i, M) cin >> cond[i].first >> cond[i].second;
    int K;
    cin >> K;
    vector<pair<int, int>> choice(K);
    rep(i, K) cin >> choice[i].first >> choice[i].second;

    int max_res = 0;
    for(int bit = 0; bit < 1<<K; bit++){
        vector<int> dish(N, 0);
        for(int k=0; k<K; k++){
            const auto C = choice[k].first -1 ;
            const auto D = choice[k].second-1;
            dish[(bit & (1<<k)) ? C : D] = 1;
        }
        int cnt = 0;
        for(auto i : cond){
            if(dish[i.first-1] && dish[i.second-1]){
                cnt++;
            }
        }
        max_res = max(cnt, max_res);
    }
    cout << max_res << endl;

    return 0;
}