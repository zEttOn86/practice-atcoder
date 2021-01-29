#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int N;
    cin >> N;
    vector<pair<int, int>> A(1<<N);
    rep(i, 1<<N) {
        cin >> A[i].second;
        A[i].first = i+1;
    }
    
    while(1){
        if(A.size()==2){
            break;
        }
        pair<int, int> p0 = A[0];
        pair<int, int> p1 = A[1];
        A.erase(A.begin(), A.begin()+2);
        if(p0.second > p1.second){ 
            A.push_back(p0);
        }else{
            A.push_back(p1);
        }
    }

    int min_rank = min(A[0].second, A[1].second);
    if(min_rank == A[0].second){
        cout << A[0].first << endl;
    }else{
        cout << A[1].first << endl;
    }
    
    return 0;
}