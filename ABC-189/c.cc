#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    rep(i, N) cin >> A[i];
    int res = A[0];
    for(int l = 0; l < N; l++){
        int min_a = A[l];
        for(int r = l; r<N; r++){
            min_a = min(min_a, A[r]);
            int temp_res = ((r - l)+1) * min_a;
            if(temp_res > res){
                res = temp_res;
            }
        }
    }
    cout << res << endl;

    return 0;
}