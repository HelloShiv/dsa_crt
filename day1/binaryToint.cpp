#include <bits/stdc++.h>
using namespace std;

int BinaryToDecimal(string s)
{
    int i = 0;
    int count = 1;
    for (int j = s.size()-1; j >= 0; j--)
    {
        
        if (s[j] == '1')
        {
            i = i +  1 * count;
        }
        count = count * 2;
    }
    return i;
} // 100

int main(){
    cout << BinaryToDecimal("1100");
    return 0;
}


