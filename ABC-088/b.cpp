#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int N;
    int a[110];
    cin >> N;
    rep(i, N) cin >> a[i];

    sort(a, a+N, greater<int>());
    int Alice = 0;
    int Bob = 0;
    rep(i, N){
        if(i%2==0){
            Alice += a[i];
        }
        else{
            Bob += a[i];
        }
    }
    cout << Alice - Bob << endl;
    return 0;
}