#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int k = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int dif = a[i] - a[i + 1];
        k = max(k, dif);
    }
    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[i - 1])
            a[i] += k;
    }
    if (is_sorted(a.begin(), a.end()))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    long long t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
