#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, max = 0, maxn = 0;
    cin >> n;
    int like[10000] = {};
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        auto &A = like[a - 1];
        A += 1;
        if (A >= max)
            max = A;
        if (a >= maxn)
            maxn = a;
    }
    for (int i = 0; i < maxn; i++)
        if (like[i] == max)
            cout << i + 1 << " ";
    return 0;
}