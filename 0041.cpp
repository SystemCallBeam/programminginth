#include <bits/stdc++.h>
using namespace std;
float c = sqrt(3);
void solve(int n)
{
    int x = n/3;
    if (1 == n)
    {
        printf("2.000000");
    }
    
    else if (n % 3 == 0)
    {
        printf("%f", (x*2-1)*c+2);
    }
    else if (n % 3 == 1)
    {
        printf("%f", (x-1)*c*2+4);
    }
    else
    {
        printf("%f", x*c*2+2); 
    }
}
int main()
{
    int n;
    cin >> n;
    solve(n);
    return 0;
}