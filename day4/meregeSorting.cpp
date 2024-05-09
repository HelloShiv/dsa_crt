#include <iostream>
#include <vector>
using namespace std;


void merging(vector<int>& a ,vector<int>& t, int lb1 , int ub1 , int lb2 , int ub2){
    int i, j, k;

    for (i = lb1, j = lb2, k = lb1; i < ub1 && j < ub2; k++){
        if(a[i]<a[j])
            t[k] = a[i++];
        else
            t[k] = a[j++];
    }

    while(i<ub1)
        t[k++] = a[i++];
    
    while(j<ub2)
        t[k++] = a[j++];

    for (i = lb1; i <= ub2; i++){
        a[i] = t[i];
    }
}

void merge_sort(vector<int>& arr, vector<int>& t,int low , int high){
    if(low >= high)
        return;
    int mid = (low + high) >> 1;
    merge_sort(arr,t, low,mid );
    merge_sort(arr, t,mid + 1, high);

    merging(arr, t,low, mid, mid + 1, high);
}

int main(){
    std::vector<int> arr = {4, 5, 3, 5, 6, 7, 32, 1};
    vector<int> t(arr.size());
    merge_sort(arr , t ,0 , arr.size()-1);
    for(auto it: t){
        cout << " ," << it;
    }
    return 0;
}