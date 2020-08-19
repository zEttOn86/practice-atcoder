#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int a, b;
    cin >> a >> b;
    int area = a * b;
    int perimeter = 2*(a+b);
    cout << area << " " << perimeter << endl;
    return 0;
}