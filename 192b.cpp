#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin >> n;
    vector<long long> a(n);
    long long c1 = 0, c2 = 0, c3 = 0;
    vector<int> l(n), m(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 1)
            c1++;
        else if (a[i] == 2)
            c2++;
        else
            c3++;
        l[i] = c1 - c2 - c3;
        m[i] = c1 + c2 - c3;
    }
    bool flag = false;
    int minm = 1e9;
    for (long long j = 1; j < n - 1; j++)
    {
        int i = j - 1;
        if (l[i] >= 0)
        {
            minm = min(minm, m[i]);
        }
        if (m[i] != 1e9 && m[j] >= minm)
        {
            flag = true;
            break;
        }
    }
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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