#include <bits/stdc++.h>
#define Y 2009 //
using namespace std;

int m[] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};
string day[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
void solve(int D, int M) // int Y
{
    int sumday = D + m[M - 1];
    if(Y%4==0||Y%400==0&&Y%100!=0)sumday++;
    int date = (Y-1+Y/4-Y/100+Y/400+sumday)%7;
    cout << day[date];
}
int main()
{
    int D, M; // Y
    cin >> D >> M; // Y
    solve(D, M); // Y
    return 0;
}