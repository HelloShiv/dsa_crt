#include <iostream>
#include <vector>
using namespace std;

void print(std::vector<int> &arr , int i){
    if( i > arr.size()-1)
        return;
    cout << arr[i] << " , ";
    print(arr, i + 1);
}

int main(){
    std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    print(arr, 0);
    return 0;
}