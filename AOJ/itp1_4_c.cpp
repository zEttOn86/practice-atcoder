#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main()
{
    int a, b;
    string op;
    while (1)
    {
        cin >> a >> op >> b;
        if (op == "?")
            break;
        if (op == "+")
            cout << a + b << endl;
        else if (op == "-")
            cout << a - b << endl;
        else if (op == "/")
            cout << a / b << endl;
        else if (op == "*")
            cout << a * b << endl;
    }

    return 0;
}