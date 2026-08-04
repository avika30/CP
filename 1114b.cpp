#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int c = 1;
    for (int i = 1; i < n; i++)
    {
        if (s[i - 1] != s[i])
            c++;
    }
    int r = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (s[i - 1] == s[i + 1] && s[i] != s[i - 1])
        {
            r = max(r, 2);
        }
        if (s[i - 1] != s[i] && s[i] != s[i + 1] && s[i - 1] != s[i + 1])
        {
            r = max(r, 1);
        }
    }
    cout << c - r << endl;
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