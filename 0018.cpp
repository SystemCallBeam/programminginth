#include<bits/stdc++.h>
using namespace std;

bool isprime(int n){
    for (int i = 2; i*i < n; i++)
        if (n%i==0) return false;
    return true;
}
int main(){
    int n,f,cnt = 0;
    cin >> n >> f;
    int box[n], t[n+1] = {};
    for (int i = 2; i <= n; i++)
        if (isprime(i))
            for (int j = 2; j <= n; j++)
                if (j%i==0&&!t[j]++)
                    box[cnt++] = j;
    cout << box[f-1];
    return 0;
}