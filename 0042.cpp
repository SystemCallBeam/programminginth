#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long double box[n];
    for (int i = 0; i < n; i++)
    {
        cin >> box[i];
        box[i] = pow(2,box[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << box[i] << endl;
    }
    return 0;
}