#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        bool flag = true;
        for (long long i = 0; i < k; i++)
        {
            long long c = 0;
            for (long long j = i; j < n; j += k)
            {
                if (s[j] == '1')
                {
                    c++;
                }
            }
            if (c % 2 != 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}