#include <bits/stdc++.h>
using namespace std;

int valueToBeInserted = 12;
void work(int *arr, int n, int target)
{
    if ( n < target || target > n){
        cerr << "Invalid position";
        exit(1);
    }

    for (int i = n - 1; i >= target; i++){
        arr[i + 1] = arr[i];
    }
    arr[target] = valueToBeInserted;
}

int main(){
    int arr[6] = {10, 20, 30, 40, 50, 60};
    work(arr, 6 , 6);
    for(auto it: arr){
        cout << it << " ,";
    }
    return 0;
}


/*
    10 20 30 40 50 60

*/