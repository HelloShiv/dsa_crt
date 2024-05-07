#include <bits/stdc++.h>
using namespace std;

int countsetBit(int x){
    int count = 0;
    while(x){
        if((x & 1) != 0){
            count++;
        }
        x = x >> 1;
    }
    return count;
}

int main(){
    cout << countsetBit(25);
    return 0;
}