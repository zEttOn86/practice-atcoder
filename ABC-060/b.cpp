#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    for(int i=1; i<=a*b; i++){
        if(a*i%b==c){
            cout << "YES" << endl; 
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}