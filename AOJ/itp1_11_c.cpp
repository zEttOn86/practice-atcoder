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
    Dice d1, d2;
    rep(i, 6) cin >> d1.s[i];
    rep(i, 6) cin >> d2.s[i];
    bool f = false;
    rep(i, 4){
        d2.roll('R');
        rep(j, 4){
            d1.roll('N');
            if(same(d1, d2)) f = true;
        }
    }

    d2.roll('E');
    rep(i, 4){
        d2.roll('N');
        if(same(d1, d2)) f = true;
    }
    
    d2.roll('W');
    d2.roll('W');
    rep(i, 4){
        d2.roll('N');
        if(same(d1, d2)) f = true;
    }
    cout << (f ? "Yes" : "No") << endl;
    return 0;
}