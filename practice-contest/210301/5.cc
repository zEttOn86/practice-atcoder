#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n;
    string input;
    cin >> n >> input;
    int phase = 0;
    string s = "b";
    bool can = false;
    while(1){
        if(input==s) {can=true; break;}

        phase++;
        if(phase%3==1) s = "a" + s + "c";
        else if(phase%3==2) s = "c" + s + "a";
        else s = "b" + s + "b";
        if(s.size()>n) {break;}
        // cout << s << endl;
    }
    if(false == can) phase = -1;
    cout << phase << endl;
    return 0;
}