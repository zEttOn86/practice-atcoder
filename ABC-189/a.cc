#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    string C;
    cin >> C;
    if(C[0] == C[1] && C[1] == C[2] && C[0] == C[2]){
        cout << "Won" << endl;
    }else{
        cout << "Lost" << endl;
    }
    return 0;
}