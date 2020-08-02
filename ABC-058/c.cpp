#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

string LCS(string s1, string s2){
    // https://qiita.com/_rdtr/items/c49aa20f8d48fbea8bd2
    int l1 = s1.size();
    int l2 = s2.size();
    if(l1 == 0 or l2==0){
        return '';
    }
    vector<int> m(l1, vector<int>l2);

    // Fill 0 th row
    bool isSameFound = False;
    rep(i, l1){
        if(isSameFound || s1[i]==s2[0]){
            m[i][0] = 1;
            isSameFound = True;
        }
    }

    // Fill 0th col
    isSameFound = False;
    rep(i, l2){
        if(isSameFound || s1[i]==s2[0]){
            m[0][i] = 1;
            isSameFound = True;
        }
    }

    int max_len = 0;
    rep(i, l1-1){
        rep(j, l2-1){
            if(s1[i+1] == s2[j+1]){
                m[i+1][j+1] = m[i][j] + 1;
                max_len = max(m[i][j], max_len);
            }
            else{
                m[i+1][j+1] = max(m[i][j+1], m[i+1][j]);
            }
        }
    }

    string lcs_str = '';
    int i = l1 - 1;
    int j = l2 - 1;
    while(i>=0 && j >= 0){
        if(s1[i] == s2[j]{
            lcs_str = s1[i] + lcs_str;
            i -= 1;
            j -= 1;
        }
        else{
            if(m[i-1][j] > m[i][j-1]){
                i -= 1;
            }else{
                j -= 1;
            }
        }
    }
    return lcs_str;
    
}

int main()
{
    int n;
    cin >> n;
    vector<string> S(n);
    rep(i, n) cin >> S[i];
    

    return 0;
}