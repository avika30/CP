#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long x;
    cin >> x;
    int y = 1;
    while (x > 0)
    {
        y *= 10;
        x /= 10;
    }
    cout << y + 1 << "\n";
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