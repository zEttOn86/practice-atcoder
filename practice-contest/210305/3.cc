#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    int pass = 0;
    int kaigai = 1;
    for(int i=1; i<=s.size(); i++){
        if(s[i-1]=='c') {
            cout << "No" << endl;
        }
        else if('a'== s[i-1])
        {
            if(pass < a+b){
                cout << "Yes" << endl;
                pass++;
            }
            else cout << "No" << endl;
        }
        else
        {
            if(pass < a+b){
                if(kaigai<=b) {
                    cout << "Yes" << endl;
                    pass++;
                    kaigai++;
                }
                else cout << "No" << endl;
            }
            else{
                cout << "No" << endl;
            }
        }
    }
    return 0;
}