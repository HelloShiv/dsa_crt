#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

// Some error seeped into this fix it .

int jump_search(vector<int>& arr, int item){
    int start, endd, jump;
    int n = arr.size() ;
    jump = sqrt(arr.size());
    start = 0;
    endd = jump - 1;

    while(start < arr.size()-1 && item > arr[endd]){
        start = endd + 1;
        if(endd + jump <n){
            endd += jump;
        }
        else
            endd = n - 1;
    }
    if(start >= n){
        return -1;
    }
    for (int i = start; i < endd; i++){
        if(arr[i] == item)
            return i;
    }
    return -1;
}

int main(){
    vector<int> arr = {1, 2,4,5,6,7,8};
    sort(arr.begin(), arr.end());
    cout << "Found at: "<< jump_search(arr, 8);
    return 0;
}
