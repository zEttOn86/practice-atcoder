#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;
class Dice{
    public:
        int s[6];
        void roll (char c){
        int b;
        switch (c)
        {
        case 'E':
            b = s[0];
            s[0] = s[3];
            s[3] = s[5];
            s[5] = s[2];
            s[2] = b;
            break;
        case 'W':
            b = s[0];
            s[0] = s[2];
            s[2] = s[5];
            s[5] = s[3];
            s[3] = b;
            break;
        case 'N':
            b = s[0];
            s[0] = s[1];
            s[1] = s[5];
            s[5] = s[4];
            s[4] = b;
            break;
        case 'S':
            b = s[0];
            s[0] = s[4];
            s[4] = s[5];
            s[5] = s[1];
            s[1] = b;
            break;
        case 'R':
            b = s[1];
            s[1] = s[2];
            s[2] = s[4];
            s[4] = s[3];
            s[3] = b;
            break;
        default:
            break;
        }
    }
    int top(){
        return s[0];
    }
    int right(){
        return s[2];
    }
    int left(){
        return s[3];
    }
    int front(){
        return s[1];
    }
    private:
};

bool same(Dice a, Dice b){
    rep(i, 6) if(a.s[i] != b.s[i]) return false;
    return true;
}
int main()
{
    Dice d[100];
    int n;
    cin >> n;
    rep(i, n){
        rep(j, 6){
            cin >> d[i].s[j];
        }
    }

    bool ff = true;
    for(int k=0; k<n-1; k++){
        for(int l=k+1; l<n; l++){
            bool f = false;
            for(int i=0; i<4; i++){
                d[l].roll('R');
                for(int j=0; j<4; j++){
                    d[l].roll('N');
                    if(same(d[k],d[l])) f=true;
                }
            }
            d[l].roll('E');
            for(int j=0; j<4; j++){
                d[l].roll('N');
                if(same(d[k],d[l])) f=true;
            }

            d[l].roll('W');
            d[l].roll('W');
            for(int j=0; j<4; j++){
                d[l].roll('N');
                if(same(d[k],d[l])) f=true;
            }
            if(f) ff = false;
        }
    }
    cout << (ff?"Yes":"No") << endl;
    return 0;
}