#include <bits/stdc++.h>
using namespace std;

int setith(int x, int bit){
    int i = 1 << bit;
    return x | i;
}

int main(){
    cout << setith(25 , 2);
    return 0;
}


// 1 1 0 0 1