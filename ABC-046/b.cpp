#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;
int main()
{
    int N, K;
    cin >> N >> K;
    cout << K*(ll)pow((K-1),(N-1)) <<  endl;
    return 0;
}
