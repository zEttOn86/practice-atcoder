#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >>n;
    vector<string> x(n);
    rep(i,n) cin >> x[i];
    int ans = 0;
    for(int i =0; i<9; i++){
        bool prev = false;
        for(string s : x){
            if(s[i]=='.') {prev=false; continue;}
            else if(s[i]=='x') {ans++; prev=false;} 
            else {
                if(prev==false){ans++; prev=true;}
                else {/*Do nothing*/}
            }
        }
    }
    cout << ans << endl;
    return 0;
}