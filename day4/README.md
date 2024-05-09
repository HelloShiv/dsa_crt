# Searching and Sorting
1. Linear Search        O(N)
2. Jump Search          O(sqrt(N))
3. Binary Search        O(log2N)
4. Hashing              O(1)


## Linear / Straight / Sequential  (Unsorted)
```cpp
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
```

## BinarySearch
```cpp
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
```

### Recursive Binary Search
```cpp
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
```

## Jump Search :- Sorted aray  (LS < JS< BS )

# Sorting
|    Sorting algo      | Best Case  | worst case|
|-------------------|----| ------|
| Selection       | O(n2)    |        O(n2)   |  
| Bubble          | O(n2)    |       O(n2)    |  
| Insertion       | O(n2)    |       O(n)     |  
| Merge           | O(nlogn) |                |     
| Quick           | O(n2)    |       O(nlogn) |      
| Count           |          |                |             
| Shell           |          |                |   
| Topological     |          |                |   
|  Heap           |          |                |       
|  Radix Sort     |          |                |   
|  Bucket Sort    |          |                |       