#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string str;
    int cmp[n] = {};
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        int size = str.size();
        int toi = str[size-1]-'0';        
        if (size == 1 && toi == 2)
            cmp[i]=1;
        else
            (toi&1)?cmp[i]=1:cmp[i]=0;
    }
    for (int i = 0; i < n; i++)
        (cmp[i])?cout << "T" << endl:cout << "F" << endl;
    return 0;
}
