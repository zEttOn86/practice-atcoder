#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int a, b;
    cin >> a >> b;
    if(((a*b)&1) == 1){
        cout << "Odd" << endl;
    }else{
        cout << "Even" << endl;
    }
    return 0;
}