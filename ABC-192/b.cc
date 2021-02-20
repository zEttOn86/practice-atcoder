#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    string s;
    cin >> s;
    bool res = true;
    for(int i=0; i<s.size(); i++){
        if(i%2==0){
            if(s[i] >= 'a' && s[i] <= 'z'){}
            else {res = false;}
        }
        else{
            if(s[i] >= 'A' && s[i] <= 'Z'){}
            else {res = false;}
        }
    }
    if(res) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}