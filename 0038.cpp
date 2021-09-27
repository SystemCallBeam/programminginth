#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string str[n];
    for (int i = 0; i < n; i++)
        cin >> str[i];
    sort(str, str + n);
    for (int i = 0; i < n; i++)
        if (str[i] != str[i - 1] || !i)
            cout << str[i] << endl;
    return 0;
}