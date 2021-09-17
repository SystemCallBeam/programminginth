#include <bits/stdc++.h>
using namespace std;
#define n 4
int f = 0, m = 0;
int S[n][n], nS[n][n], ST[n] = {};
string T[n];

void chk(int n1, int n2)
{
    int c1 = 0, c2 = 0;
    for (int i = 0; i < n; i++)
    {
        c1 += (nS[n1][i] - nS[i][n1]);
        c2 += (nS[n2][i] - nS[i][n2]);
    }
    if (c2 > c1)
    {
        f = n2;
    }
    else if (c1 == c2)
    {
        for (int i = 0; i < n; i++)
        {
            c1 += nS[n1][i];
            c2 += nS[n2][i];
        }
        if (c2 > c1)
        {
            f = n2;
        }
    }
}
int main()
{

    // Input
    for (int i = 0; i < n; i++)
        cin >> T[i];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> S[i][j];
            nS[i][j] = S[i][j];
        }
    }
    // Solve
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (S[i][j] > S[j][i])
            {
                ST[i] += 3;
                S[i][j] = -1;
                S[j][i] = -1;
            }
            else if (S[i][j] == S[j][i] && i != j && S[i][j] != -1)
            {
                ST[i]++;
                ST[j]++;
                S[i][j] = -1;
                S[j][i] = -1;
            }
        }
    }

    // Output
    for (int i = 0; i < n; i++)
    {
        f = 0;
        m = 0;
        for (int j = 0; j < n; j++)
        {
            if (m < ST[j])
            {
                m = ST[j];
                f = j;
            }
            else if (m == ST[j])
            {
                chk(f, j);
            }
        }
        cout << T[f] << " " << ST[f] << "\n";
        ST[f] = -1;
    }
    return 0;
}
