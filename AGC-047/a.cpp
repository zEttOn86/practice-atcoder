#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    map<pair<int, int>, int> cnt;
    rep(i, n){
        double x;
        cin >> x;
        ll j = llround(x*1e9);
        int two = 0, five = 0;
        while(j%2==0){
            two++;
            j /= 2;
        }
        while(j%5 == 0){
            five++;
            j /= 5;
        }
        ++cnt[{two, five}];
    }
    ll answer = 0;
    for(auto p1 : cnt){
        for(auto p2 : cnt){
            if(p1.first.first + p2.first.first >= 18 && \
                p1.first.second + p2.first.second >= 18){
                    if(p1 < p2){
                        answer += (ll) p1.second * p2.second;
                    }
                    else if(p1 == p2){
                        answer += (ll)p1.second*(p1.second-1)/2;
                    }
                }
        }
    }
    cout << answer << endl;
    return 0;
}