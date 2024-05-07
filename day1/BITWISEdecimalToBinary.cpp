#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 128;
    for (int i = 31; i >= 0; i--){
        if((n & 1 <<i) == 0)
            cout << 0;
        else
            cout << 1;
    }
        return 0;
}