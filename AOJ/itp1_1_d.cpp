#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int s;
    cin >> s;
    int h, m;
    h = s/3600;
    m = (s-h*3600)/60;
    s = s%60;
    cout << h << ":" << m << ":" << s << endl;;
    return 0;
}