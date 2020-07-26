#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;
int main()
{
    int N;
    cin >> N;
    vector<int> counter(4, 0);
    rep(i, N) {
        char s[30];
        cin >> s;
        // cout << s << endl;
        if(s[0]=='A'){
            counter[0]++;
        }else if(s[0]=='W'){
            counter[1]++;
        }else if(s[0]=='T'){
            counter[2]++;
        }else if(s[0]=='R'){
            counter[3]++;
        }
    }
    cout << "AC x " << counter[0] << endl;
    cout << "WA x " << counter[1] << endl;
    cout << "TLE x " << counter[2] << endl;
    cout << "RE x " << counter[3] << endl;

    return 0;
}