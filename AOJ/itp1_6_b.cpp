#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    int s[14] = {0}, h[14] = {0}, c[14] = {0}, d[14] = {0};
    rep(i, n)
    {
        char suit;
        int num;
        cin >> suit >> num;
        if (suit == 'S')
        {
            s[num]++;
        }
        else if (suit == 'H')
        {
            h[num]++;
        }
        else if (suit == 'C')
        {
            c[num]++;
        }
        else if (suit == 'D')
        {
            d[num]++;
        }
    }
    for (int i = 1; i <= 13; i++)
    {
        if (s[i] == 0)
        {
            cout << "S " << i << endl;
        }
    }
    for (int i = 1; i <= 13; i++)
    {
        if (h[i] == 0)
        {
            cout << "H " << i << endl;
        }
    }
    for (int i = 1; i <= 13; i++)
    {
        if (c[i] == 0)
        {
            cout << "C " << i << endl;
        }
    }
    for (int i = 1; i <= 13; i++)
    {
        if (d[i] == 0)
        {
            cout << "D " << i << endl;
        }
    }
    return 0;
}