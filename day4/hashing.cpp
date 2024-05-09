#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>
using namespace std;



int main(){
    std::vector<int> arr = {1, 3, 5,3,4,5,2,3, 8};
    // int n = INT_MIN;
    // for(auto it: arr){
    //     n = max(it, n);
    // }

    // int *db = new int[n];
    // for (int i = 0; i < n; i++)
    // {
    //     db[i] = 0;
    // }

    // for (int i = 0; i < arr.size(); i++){
    //     db[arr[i]]++;
    // }

    // for (int i = 0; i < arr.size(); i++){
    //     if(db[i] == 0)
    //         continue;
    //     else{
    //         cout << "Element " << i << " has occurence : " << db[i] << endl;
    //     }
    // }

    unordered_map<int, int> db;
    for(auto it: arr){
        db[it]++;
    }

    for(auto it: db){
        cout << it.first << " occurend: " << it.second << " times" << endl;
    }

    return 0;
}