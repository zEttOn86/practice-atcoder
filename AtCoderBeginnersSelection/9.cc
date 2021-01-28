#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int N, Y;
    cin >> N >> Y;
    int resX = -1;
    int resY = -1;
    int resZ = -1;
    for(int x=0; x<=N; x++){
        for(int y=0; y<=N-x; y++){
            int z = N - x - y;
            int sum = 10000*x + 5000*y + 1000*z;
            if(sum==Y){
                resX = x;
                resY = y;
                resZ = z;
            }
        }
    }
    cout << resX << " " << resY << " " << resZ << endl;
    return 0;
}