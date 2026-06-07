#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long a, b;
        a = 0;
        b = n;
        if (n == 10)
        {
            cout << -1 << endl;
        }
        else if (n % 12 == n)
            cout << n << " " << 0 << endl;
        else if (n >= 12)
        {
            long long c = b % 12;
            b = b - c;
            a = c;
            if (a == 10)
            {
                cout << 22 << " " << b - 12 << endl;
            }
            else
            {
                cout << a << " " << b << endl;
            }
        }
    }
}
