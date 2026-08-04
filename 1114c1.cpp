#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    string a, b;
    cin >> n;
    cin >> a;
    cin >> b;
    int ae = 0, ao = 0;
    int be = 0, bo = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            if (a[i] % 2 == 0)
                ae++;
            if (b[i] % 2 == 0)
                be++;
        }
        else
        {
            if (a[i] % 2 != 0)
                ao++;
            if (b[i] % 2 != 0)
                bo++;
        }
    }
    if (ae == be && ao == bo)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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