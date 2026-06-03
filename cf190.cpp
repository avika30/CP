#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    vector<long long> a(n);
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    if (sum < 3)
    {
        cout << 0 << endl;
        return;
    }
    long long big = 0;
    long long space = 0;
    long long single = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
            single++;
        else if (a[i] >= 2)
        {
            big++;
            space += (a[i] - 2) / 2;
        }
    }
    if (big == 1)
        space++;
    if (single <= space)
    {
        cout << sum << endl;
    }
    else
    {
        cout << sum - single + space << endl;
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
