#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void BinarySearch(vector<int> &arr , int target , int low , int high){
    if(low > high){
        cout << "Not found";
        return;
    }
    int mid = (low + high) >> 1;
    if(arr[mid] == target){
        cout << "Found: " << arr[mid] << " at " << mid;
        return;
    }
    if(arr[mid]<target){
        BinarySearch(arr, target, mid + 1, high);
    }else{
        BinarySearch(arr, target, low, mid - 1);
    }

}

int main(){
    std::vector<int> arr = {1, 4, 6, 86, 2, 36, 7};
    std::sort(arr.begin(), arr.end());
    BinarySearch(arr, 19, 0 , arr.size()-1);
    return 0;
}