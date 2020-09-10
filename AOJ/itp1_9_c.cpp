#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<string> cards(2);
    vector<int> ans(2, 0);
    rep(i, n){
        cin >> cards[0] >> cards[1];
        string taro = cards[0];
        sort(cards.rbegin(), cards.rend());
        if(cards[0] == cards[1]){
            ans[0]++;
            ans[1]++;
        }
        else if(cards[0] != taro){
            ans[1] += 3;
        }
        else{
            ans[0] += 3;
        }
    }
    cout << ans[0] << " " << ans[1] << endl;
    return 0;
}