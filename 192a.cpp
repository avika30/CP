#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long k;
    cin >> k;
    vector<long long> a(k);
    long long c = 0;
    bool flag = false;
    for (int i = 0; i < k; i++)
    {
        cin >> a[i];
        if (a[i] >= 3)
            flag = true;
        if (a[i] >= 2)
            c++;
    }
    if (c >= 2 || flag)
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