#include <iostream>
#include <string>
using namespace std;

void decToBin(int num){
    if(num == 0)
        return;
    decToBin(num >> 1);
    cout << num % 2;
}

int main(){
    int num = 128;
    decToBin(num);
    return 0;
}