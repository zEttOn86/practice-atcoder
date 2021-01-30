#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> A(M), B(M);
    rep(i, M) cin >> A[i] >> B[i];
    
    int K;
    cin >> K;
    vector<int> C(K), D(K);
    rep(i, K) cin >> C[i] >> D[i];
    
    int max_res = 0;
    for(int bit =0; bit < (1<<K); bit++){
        vector<int> dish(N, 0);
        int temp = bit;
        for(int k=0; k<K; k++){
            if((temp&1)==0){
                dish[C[k]-1]++;
            }else{
                dish[D[k]-1]++;
            }
            temp = temp >> 1;
        }
        int cnt = 0;
        // rep(i, N){
        //     cout << i <<" "<< dish[i] << endl;
        // }
        for(int i=0; i<M; i++){
            if(dish[A[i]-1]>0 && dish[B[i]-1]>0){
                cnt++;
            }
        }
        // cout << "cnt"<<cnt << endl;
        if(max_res < cnt){
            max_res = cnt;
        }
    }
    cout << max_res << endl;

    return 0;
}