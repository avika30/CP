#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, x1, x2, k;
    cin >> n >> x1 >> x2 >> k;
    long long diff = abs(x1 - x2);
    long long d = min(diff, n - diff);

    if (n <= 3)
    {
        cout << d << endl;
    }
    else
    {
        cout << d + k << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t)
    {
        while (t--)
        {
            solve();
        }
    }
    return 0;
}
