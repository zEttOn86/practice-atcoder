#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
#define BOARDER ("####################")

void print_array(int array[][10])
{
    rep(i, 3)
    {
        rep(j, 10)
        {
            cout << " " << array[i][j];
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    int w[3][10] = {0}, x[3][10] = {0}, y[3][10] = {0}, z[3][10] = {0};
    rep(i, n)
    {
        int b, f, r, v;
        cin >> b >> f >> r >> v;
        if (b == 1)
            w[--f][--r] += v;
        if (b == 2)
            x[--f][--r] += v;
        if (b == 3)
            y[--f][--r] += v;
        if (b == 4)
            z[--f][--r] += v;
    }
    print_array(w);
    cout << BOARDER << endl;
    print_array(x);
    cout << BOARDER << endl;
    print_array(y);
    cout << BOARDER << endl;
    print_array(z);

    return 0;
}