#include <iostream>
using namespace std;

int power(int num , int n){
    if(n == 0)
        return 1;
    return num * power(num, n - 1);
}

int main(){
    cout << power(5, 3);
    return 0;
}