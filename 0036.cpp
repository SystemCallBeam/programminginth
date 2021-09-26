#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    cout << ((n<3)? 2:((n%2==0)?n*(n-1)/2:n*(n+1)/2));
    return 0;
}