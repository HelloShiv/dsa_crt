#include <bits/stdc++.h>
using namespace std;

int main(){
    int a = 10;
    int b = 20;
    int c = a ^ b;
    int count = 0;
    while (c)
    {
        if(c&1 != 0)
            count++;
        c = c >> 1;
    }
    cout << count;
    return 0;
}