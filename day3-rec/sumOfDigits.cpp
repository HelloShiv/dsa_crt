#include <iostream>
using namespace std;

int sum(int num){
    if(num == 0)
        return 0;
    return 1 + sum(num / 10);
}

int main(){
    cout << sum(198);
    return 0;
}