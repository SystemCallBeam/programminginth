#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    char c;
    cin >> a >> c >> b;
    int aa = a.size(), bb = b.size();
    if (aa < bb)
        swap(a, b);
    aa = a.size(), bb = b.size();
    switch (c)
    {
    case '*':
        for (int i = 0; i < bb - 1; i++) a += '0';
        cout << a;
        break;
    case '+':
        if (aa == bb)
        {
            a[0]++;
            cout << a;
        }
        else
        {
            a[aa - bb]++;
            cout << a;
        }
        break;
    }
    return 0;
}