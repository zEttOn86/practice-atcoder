#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int m, f, r;
    while(1){
        cin >> m >> f >> r;
        if(m==-1 && f==-1 && r==-1) break;
        string ans;
        if(m==-1 || f==-1) ans = "F";
        else if(m+f>=80) ans = "A";
        else if (m+f>=65) ans = "B";
        else if (m+f>=50 || r>=50) ans = "C";
        else if (m+f>=30) ans = "D";
        else ans = "F";

        cout << ans << endl;

    }
    return 0;
}