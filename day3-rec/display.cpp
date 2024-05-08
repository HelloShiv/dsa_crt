#include <iostream>
using namespace std;

void display(int i , int n){
    if( i > n)
        return;
    display(i + 1, n);
    cout << i << " , ";

}

int main(){
    display(1, 4);
    cout << "\b\b";
    return 0;
}