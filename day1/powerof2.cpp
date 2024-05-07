#include <bits/stdc++.h>
using namespace std;
int main(){
    int n = 128;
    int count = 0;
    (n & (n - 1)) ? cout <<"not 2 power" : cout << "2's power";

    cout << "  " << log2(n);
    return 0;
}