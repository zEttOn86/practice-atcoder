#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int N, A, B;
    cin >> N >> A >> B;
    int res = 0;
    for(int i=1; i<=N;i++){
        int temp = i;
        int sum = 0;
        while(temp)
        {
            sum += (temp % 10);
            temp /= 10;
        }
        if(sum >= A && sum <= B) res+=i;
    }
    cout << res << endl;
    return 0;
}