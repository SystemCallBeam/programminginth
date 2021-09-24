#include <bits/stdc++.h>
using namespace std;

int main()
{
    float x[100] = {}, y[100] = {}, n, ans = -1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = 1; j < n - 1; j++)
        {
            for (int k = 2; k < n; k++)
            {
                if (ans < abs(x[i] * y[j] + x[j] * y[k] + x[k] * y[i] - y[i] * x[j] - y[j] * x[k] - y[k] * x[i]) / 2)
                {
                    ans = abs(x[i] * y[j] + x[j] * y[k] + x[k] * y[i] - y[i] * x[j] - y[j] * x[k] - y[k] * x[i]) / 2;
                }
            }
        }
    }
    printf("%.3f", ans);
    return 0;
}