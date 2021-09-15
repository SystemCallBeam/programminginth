#include<bits/stdc++.h>
using namespace std;

int main(){
    int max = -1, mem, sum = 0, s;
    for (int i = 0; i < 5; i++)
    {
        sum = 0;
        for (int j = 0; j < 4; j++)
        {
            cin >> s;
            sum += s;
        }
        if (max<sum)
        {
            max = sum;
            mem = i;
        }
    }
    cout << mem+1 << " " << max;
    return 0;
}