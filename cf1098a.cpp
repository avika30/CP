#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    vector<long long> a(n);
    long long ops = 0;
    long long c1 = 0, c0 = 0, c2 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
            c0++;
        else if (a[i] == 1)
            c1++;
        else if (a[i] == 2)
            c2++;
    }
    ops += c0;
    long long pairs = min(c1, c2);
    ops += pairs;
    c1 -= pairs;
    c2 -= pairs;
    ops += (c1 / 3);
    ops += (c2 / 3);

    cout << ops << endl;
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
