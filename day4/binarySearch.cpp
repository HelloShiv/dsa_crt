#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void BinarySearch(vector<int> &arr , int target){
    int start = 0 , end = arr.size() -1;

    while(start <= end){
        int mid = (start + end) >> 1;
        if(arr[mid] == target){
            cout << " Found " << arr[mid] 
                 << " at index: " << mid;
            return;
        }
        if(arr[mid] < target){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }
    cout << "Not Found";
}

int main(){
    std::vector<int> arr = {1, 4, 6, 86, 2, 36, 7};
    std::sort(arr.begin(), arr.end());
    BinarySearch(arr, 1);
    return 0;
}