#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;
struct Dice{
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
};
int main()
{
    Dice d;
    rep(i, 6) cin >> d.s[i];
    int q;
    cin >> q;
    rep(i, q){
        int top, front;
        cin >> top >> front;
        if(d.left()==top) d.roll('E');
        if(d.right()==top) d.roll('W');
        while(d.top()!=top) d.roll('N');
        while(d.front()!=front) d.roll('R');
        cout << d.right() << endl;
    }
    return 0;
}