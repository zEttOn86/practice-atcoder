#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;
int main()
{
    int cnt=0;
    int K, S;
    cin >> K >> S;
    for(int z=0; z<=K; z++){
        for(int y=0; y<=K; y++){
            int x = S-z-y;
            if(x>=0 && K>= x){
                cnt++;
            }
        }
    }
    cout << cnt << endl;

    return 0;
}