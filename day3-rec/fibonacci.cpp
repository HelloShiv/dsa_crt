#include <iostream>
using namespace std;

int dp[100] = {0};
int count = 0;
int fibo(int num)
{
    count++;
    if (num <= 1)
        return num;
    
    if( dp[num] == 0){
        dp[num] = fibo(num - 1) + fibo(num - 2) + fibo(num-3);
    }

    return dp[num];
}

int main(){
    cout << fibo(6)<<endl;
    cout << count;
    return 0;
}

// 1 1 2 4 7 13