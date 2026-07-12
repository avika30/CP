#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin >> n;
    if (n == 1)
        cout << 1 << endl;
    else if (n == 2)
        cout << -1 << endl;
    else
    {
        cout << "1 2 ";
        long long c = 3;
        for (long long j = 3; j <= n; j++)
        {
            cout << c << " ";
            c = c * 2;
        }
        cout << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}