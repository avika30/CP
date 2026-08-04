#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int arr[] = {a, b, c};
    sort(arr, arr + 3);
    cout << min(arr[2] - arr[1], arr[1] - arr[0]) << endl;
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