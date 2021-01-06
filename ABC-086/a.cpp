#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int a, b;
    cin >> a >> b;
    int c = a*b;
    if(((c)&1)==0){
        cout << "Even" << endl;
    }else{
        cout << "Odd" << endl;
    }
    return 0;
}