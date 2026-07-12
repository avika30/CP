#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i += 2)
    {
        cout << i + 1 << " " << i << " ";
    }
    cout << endl;
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