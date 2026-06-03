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
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int l = 0, r = 0;
        int m = a[n / 2];
        for (int i = 0; i < n; i++)
        {
            if (a[i] < m)
                l++;
            else if (a[i] > m)
                r++;
        }
        cout << max(l, r) << endl;
    }
}