#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;
int main()
{
    int N;
    cin >> N;
    if(N%1000 == 0){
        cout << 0 << endl;
    }else{
        cout << 1000 - N%1000 << endl;
    }
    return 0;
}
