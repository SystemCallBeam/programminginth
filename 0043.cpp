#include <bits/stdc++.h>
using namespace std;

long double solve(int n)
{
    long double ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            for (int k = 0; k < n + i + j; k++)
            {
                ans += (i * j * k) % (i + j + k);
            }
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    long double ans[n] = {};
    for (int i = 0; i < n; i++)
    {
        cin >> ans[i];
        ans[i] = solve(ans[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}