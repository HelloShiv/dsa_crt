#include <bits/stdc++.h>
using namespace std;

string decimalToBinary(int i)
{
    string s ;
    while (i)
    {
        // s +=  to_string(i% 2);
        s += i % 2 + 48;
        i = i / 2;
    }
    reverse(s.begin(), s.end());
    return s;
}

int main(){
    cout << decimalToBinary(3);
    return 0;
}