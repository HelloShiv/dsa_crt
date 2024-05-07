## Data :- 
Information whether it is processed or raw it is called as data.
Data is stored on secondary storage device in a text file or a database(MYSQL,oracle , sql server). We havve to load data also in RAM.

Program is also saved on secondary storage device but when we execute them we have to load it in primary device (RAM)

We have to arrange the data in RAM so that program can process on it. That arrangement is called as data structure. we can  it using array or using linked list and many more.

## Types of Data Structures:-
1. Linear DS (When we can traverse any data structure linearly or sequentially)
 - Array
 - Linked List
 - Stack
 - Queue
 - Hash Table

2. Non linear DS
- Tree 
- Graph

## Opeartions on Data Structures
- Traverse
- Insertion
- Deletion
- Searching
- Sorting
- Merging

## Time and Space Complexity (1st priority is given to time complexity)
- Time Complexity:- Number of steps
  ```cpp
    int sum(vector<int> v1){
        int s = 0 ;                             // 1
        for(int i = 0 ; i < v1.size() ; i++){   // 1 + 2N
            s += v1[i];                         //N
        }
        return s;                               // 1
    }                                           // total :- 3N + 3
  ```   

  | Heap Sorting (winner) | Merge Sorting |
  | --------------------- | ------------- |
  | Time O(Nlog2N) | O(Nlog2N)|
  | space O(1) | space O(N)|

----------------

## Bit Manipulation (Only in int) (it will convert number into binary automatically)
### Only works on int
Bitwise Operators
- &  
- | 
- ^  
- ~   
- <<  
-  \>>


|  a | b | & | OR | ^ |
|----|---|---| --|--|
|  0 | 0 | 0 | 0 | 0 |
|  0 | 1 | 0 | 1 | 1 |
|  1 | 0 | 0 | 1 | 1 |
|  1 | 1 | 1 | 1 | 0 |

5 /2 && 5 >> 1      are same
5*2 && 5 << 1       are same

----
## Q. Decimal to Binary  using Airthmetic operator
```cpp 

string decimalToBinary(int i)
{
    string s ;
    while (i)
    {
        // s +=  to_string(i% 2);
        s += i % 2 + 48;
        i = i / 2;
    }
    reverse(s.begin(), s.end());
    return s;
}
```

### Q2.  Decimal to Binary

```cpp
int BinaryToDecimal(string s)
{
    int i = 0;
    int count = 1;
    for (int j = s.size()-1; j >= 0; j--)
    {
        
        if (s[j] == '1')
        {
            i = i +  1 * count;
        }
        count = count * 2;
    }
    return i;
}
```

### ` n & 1 ` gives last bit


### Q3 disply the ith bit
```cpp
string ithbit(int num , int bit){
    int i = 1 << bit;
    return (num & i) != 0 ? "set" : "unset";
}
```

### convert A to B and count the number of bits;


### Q check wheather a given number is in power of 2  and prit the index of the setbit




# Important
` n ^ 1 `  last bit toogle
```cpp
5    1 0 1
      ^  1
     1 0 0    <----       last bit toggled
```


` n & 1 `  display last bit 

`when we need to convert a binary of positive number  into negative number or vice versa then use 2's complement`