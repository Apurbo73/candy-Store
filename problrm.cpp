#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    while (n--)
    {
        int a, b, c = 0, d = 0, f = 0;
        cin >> a >> b;
        if (a > b)
        {
            cout << b << endl;
        }
        else if (a == b)
        {
            cout << a << endl;
        }
        else if (a < b)
        {
            c = b - a;
            f = c * 2;
            d = a * 1;
            cout << f + d << endl;
        }
    }

    return 0;
}