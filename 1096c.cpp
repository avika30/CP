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
        vector<long long> a, b, c, d;
        for (long long i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            if (x % 6 == 0)
                a.push_back(x);
            else if (x % 2 == 0)
                b.push_back(x);
            else if (x % 3 == 0)
                c.push_back(x);
            else
                d.push_back(x);
        }
        vector<long long> ans;
        for (auto i : a)
            ans.push_back(i);
        for (auto i : b)
            ans.push_back(i);
        for (auto i : d)
            ans.push_back(i);
        for (auto i : c)
            ans.push_back(i);
        for (auto i : ans)
            cout << i << " ";
        cout << endl;
    }
}