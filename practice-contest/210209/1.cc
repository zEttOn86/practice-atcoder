#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> a(1<<n);
    rep(i, 1<<n) {
        cin >> a[i].second;
        a[i].first = i+1;
    }
    while(a.size()>2){
        vector<pair<int, int>> na;
        for(int i=0; i<a.size(); i+=2){
            if(a[i].second > a[i+1].second){
                na.push_back(a[i]);
            }else
            {
                na.push_back(a[i+1]);
            }   
        }
        swap(na, a);
    }
    if(a[0].second > a[1].second){
        cout << a[1].first << endl;
    }else
    {
        cout << a[0].first << endl;
    }   
    
    return 0;
}