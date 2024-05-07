#include <bits/stdc++.h>
using namespace std;
int ithbit(int num , int bit){
    // int i = 1 << bit;
    // return (num & i) != 0 ? "set" : "unset";
    int i = num >> bit;
    return i & 1;
}

int main(){
    cout << ithbit(25,0);
    return 0;
}