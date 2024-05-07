#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> one = {2, 4, 6, 8, 10};
    vector<int> two = {1, 3, 5, 7, 9};
    vector<int> three;
    int i = 0, j = 0;

    while(i < one.size() && j < two.size()){
        if(one[i] < two[j]){
            three.push_back(one[i]);
            i++;
        }else{
            three.push_back(two[j]);
            j++;
        }
    }

    while(i < one.size()){
        three.push_back(one[i]);
            i++;
    }
    
    while(j < two.size()){
        three.push_back(two[j]);
            j++;
    }

    
    for(auto it: three){
        cout << it << " ,";
    }
    cout << "\b";

    return 0;
}