#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int N, Y;
    cin >> N >> Y;
    int res10000 = -1, res5000 = -1, res1000 = -1;
    for(int a=0; a<=N; a++){
        for(int b=0; b+a<=N; ++b){
            int c = N -a -b;
            int total = 10000*a + 5000*b + 1000*c;
            if(total == Y){
                res10000 = a;
                res5000 = b;
                res1000 = c;
            }
        }
    }
    cout << res10000 << " " << res5000 << " " << res1000 << endl;
    return 0;
}