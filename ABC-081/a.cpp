#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    string s;
    cin >> s;
    int counter = 0;
    if(s[0]=='1') counter++;
    if(s[1]=='1') counter++;
    if(s[2]=='1') counter++;
    cout << counter << endl;
    return 0;
}