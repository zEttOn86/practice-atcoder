#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    string s;
    cin >> s;
    if((*(s.end()-1)) != 's') s.append("s");
    else s.append("es");
    cout << s << endl;
    return 0;
}