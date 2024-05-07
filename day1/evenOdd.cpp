#include<bits/stdc++.h>
using namespace std;

string evenOdd(int x){
    // return x & 1 == 1 ? "odd" : "even";
    return x ^ 1 == x + 1 ? "even" : "odd";
}
int main()
{

    cout << evenOdd(11);
    return 0;
}