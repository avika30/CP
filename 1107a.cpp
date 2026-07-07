#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long x, y;
    cin >> x >> y;
    cout << (x % y == 0 ? "YES" : "NO") << "\n";
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