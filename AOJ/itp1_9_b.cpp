#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    string s;
    int m, h;
    while(cin >> s){
        if(s=="-") break;
        int first = 0;
        cin >> m;
        rep(i, m){
            cin >> h;
            first += h;
            first %= s.size();
        }
        rep(i, s.size()){
            cout << s[(i+first)%s.size()];
        }
        cout << endl;
    }
    return 0;
}