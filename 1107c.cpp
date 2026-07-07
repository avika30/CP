#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < n - 1; i++)
        if (s[i] != s[i + 1])
            count++;

    cout << (count == 1 ? 2 : 1) << '\n';
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