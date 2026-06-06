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
        string s;
        cin >> s;
        long long c1 = 0, c2 = 0;
        for (long long i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                c1++;
            }
            else
            {
                c2++;
            }
        }
        if (c1 == c2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}