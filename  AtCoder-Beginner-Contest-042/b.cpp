#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;
int main()
{
    int N, L;
    cin >> N >> L;
    vector<string> s(N);
    // vector<vector<char>> s(N, vector<char>(L));

    rep(i, N) cin >> s[i];
    sort(s.begin(), s.end());
    rep(i, N) cout << s[i];
    cout << endl;

    return 0;
}