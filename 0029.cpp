#include<bits/stdc++.h>
using namespace std;

int solve(float x, float y){
    int c = (y+x-0.1)/x;
    return (x>y)?2:c; 
}
int main(){
    float x, y;
    cin >> x >> y;
    cout << solve(x, y);
    return 0;
}