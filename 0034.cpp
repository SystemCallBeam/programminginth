#include<bits/stdc++.h>
using namespace std;

int main(){
    char s;
    int A, B, C, C2;
    cin >> A >> B >> C;
    C2 = C;
    if(C<0) C = -C;
    for(int a = 1; a <= A; a++){
        for (int c = A; c > 0; c--)
        {
            if (a*c==A)
            {
                for (int b = -C; b <= C; b++)
                {
                    for (int d = C; d >= -C; d--)
                    {
                        if (b*d==C2&&a*d+b*c==B)
                        {
                            printf("%d %d %d %d ", a, b, c, d);
                            cin >>  s;
                            return 0;
                        }
                    }
                }
            }
        }
    }
    cout << "No Solution";
    cin >> s;
    return 0;
}