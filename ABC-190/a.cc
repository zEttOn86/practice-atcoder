#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int A,B,C;
    cin >> A >> B>>C;
    if(C==0){
        while(1){
            A--;
            if(A<0){
                cout << "Aoki" << endl; 
                break;
            }
            B--;
            if(B<0){
                cout << "Takahashi" << endl;
                break;
            }
        }
    }else{
        while(1){
            B--;
            if(B<0){
                cout << "Takahashi" << endl;
                break;
            }
            A--;
            if(A<0){
                cout << "Aoki" << endl; 
                break;
            }
        }
    }
    return 0;
}