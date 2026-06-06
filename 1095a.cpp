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
        long long cost = 0;
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (long long i = 0; i < n; i++)
        {
            if (a[i] > 1)
                cost += a[i];
        }
        if (a.back() == 1)
            cost++;
        cout << cost % 676767677 << endl;
    }
}