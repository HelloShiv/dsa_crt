#include <iostream>
#include <vector>
using namespace std;

void find(vector<int> &arr , int target){
    for (int i = 0; i < arr.size(); i++)
    {
        if( arr[i] == target){
            cout << "Found " << arr[i] << " at index: "<< i;
            return;
        }   
    }
    cout << "No enteries";
}

int main(){
    std::vector<int> arr = {1, 4, 6, 86, 2, 36, 7};
    find(arr, 4);
    return 0;
}