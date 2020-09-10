#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    string str;
    int q;
    cin >> str >> q;
    rep(i, q){
        string comm;
        int a, b;
        string p;
        cin >> comm;
        if(comm=="replace"){
            cin >> a >> b >> p;
            for(int j = a; j<=b; j++){
                str[j] = p[j-a];
            }
            // cout << str << endl;

        }
        else if(comm=="reverse"){
            cin >> a >> b;
            reverse(str.begin()+a, str.begin()+b+1);
            // cout << str << endl;
        }
        else if(comm=="print"){
            cin >> a >> b;
            for(int j=a; j<=b; j++){
                cout << str[j];
            }
            cout << endl;
        }
    }   
    return 0;
}