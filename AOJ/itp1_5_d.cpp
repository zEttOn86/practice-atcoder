#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int x = i;
        if (x % 3 == 0)
        {
            cout << " " << i;
        }
        else
        {
            do
            {
                if (x % 10 == 3)
                {
                    cout << " " << i;
                    break;
                }
                x /= 10;
            } while (x);
        }
    }
    cout << endl;
    return 0;
}