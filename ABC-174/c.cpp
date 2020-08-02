#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;
int main()
{
    int K;
    cin >> K;
    int x = 7%K;
    set<int> s;
    int i = 1;
    while(s.count(x) == 0){//まだ訪れていない場合続ける
        if(x==0){
            cout << i << endl;
            return 0;
        }
        s.insert(x);
        x = (x*10+7)%K;
        ++i;
    }
    cout << -1 << endl;
    return 0;
}