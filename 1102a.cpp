#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> b(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        sort(b.begin(), b.end(), greater<long long>());
        long long ans = 0;
        for (long long i = 0; i < n - 2; i++)
        {
            if (b[i] % b[i + 1] != b[i + 2])
                ans++;
        }
        if (ans != 0)
            cout << -1 << endl;
        else
            cout << b[0] << " " << b[1] << endl;
    }
    return 0;
}
