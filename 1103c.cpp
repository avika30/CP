#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long a, b, x;
        cin >> a >> b >> x;
        vector<long long> v;
        vector<long long> u;
        int min = -1;
        while (a > 0)
        {
            v.push_back(a);
            a /= x;
        }
        v.push_back(0);
        while (b > 0)
        {
            u.push_back(b);
            b /= x;
        }
        u.push_back(0);
        for (long long i = 0; i < v.size(); i++)
        {
            for (long long j = 0; j < u.size(); j++)
            {
                long long c = v[i];
                long long d = u[j];
                long long ops = i + j + abs(c - d);
                if (min == -1 || ops < min)
                    min = ops;
            }
        }
        cout << min << endl;
    }
}