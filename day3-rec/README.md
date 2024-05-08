# Recursion
function calling itself


// Recursive call
```cpp
main(){
    main();
}
----
```

 Non recursive call
```cpp
main(){
    
    sum(int , int);
}

sum( , ){

}
```
If a program is called infinite times then the OS will kill the process feature provided by OS.

### Q1
```cpp

int main(){
    int i = 0 ; // i is a local variable
                // Every time we call main() a new i variable will be created


    cout << "maya";
    i++;
    if(i <= 5)
        main();
    return 0;
}

```

Solution 1
```cpp

int i = 1; // now i is glabal variable so life of the variable will be equal to life of program
int main(){
    int i = 0 ; 

    cout << "maya";
    i++;
    if(i <= 5)
        main();
    return 0;
}

```

Solution 2

```cpp

int main(){
    // This statement will be executed only first time
    static int i = 0 ; // Now life of i will be equal to the life of program due to static keyword


    cout << "maya";
    i++;
    if(i <= 5)
        main();
    return 0;
}

```

### Q2 Print till n
```cpp
void display(int i , int n){
    if( i > n)
        return;
    cout << i << " , ";

    display(i + 1, n);  // forward track
}

int main(){
    display(1, 4);
    cout << "\b\b";
    return 0;
}
```


### Q3 Print reverse   backtracking
```cpp
void display(int i , int n){
    if( i > n)
        return;
    display(i + 1, n);  // backtrack
    cout << i << " , ";

}

int main(){
    display(1, 4);
    cout << "\b\b";
    return 0;
}
```


```cpp

        forwardt racking
        --------->
1    2    3    4    5    6    7
|____|____|____|____|____|___| terminating condition
______________________________                              
|    |    |    |    |    |    | 
1    2    3    4    5    6    7
        <-----------
        backtracking
```
---
# Types of Recursion:-

## Head Recursion
```cpp
void f1(){
    if()
      ---;
    f1();
    ---statement---
    ---statement---
    ---statement---
}
```

## Tail Recursion
```cpp
void f2(){
    if()
      ---;
    ---statement---
    ---statement---
    ---statement---
    f1();
}
```

## Direct Recursion
```cpp
void f1(){
    
    f1();
}
```
## Indirect Recursion

```cpp
void f1(){
    f2();
}
void f2(){
    f3();
}
void f3(){
    f1();
}
```

## Q fibonacci
```cpp

int fibo(int num)
{
    if( num <= 1 )
        return num;

    return fibo(num - 1) + fibo(num - 2);
}

```

## Using dynamaic programming
```cpp
int dp[100] = {0};
int count = 0;
int fibo(int num)
{
    count++;
    if (num <= 1)
        return num;
    
    if( dp[num] == 0){
        dp[num] = fibo(num - 1) + fibo(num - 2) ;
    }

    return dp[num];
}
```

## GCD
```cpp
int gcd(int a , int b){
    if( b == 0){
        return a;
    }
    return gcd(b, a % b);
}

or

int gcd(int n1 , int n2){
    if(n1>n2 && n1%n2 == 0)
        return n2;
    return gcd(n2,n1%n2);
}
```
## LCM
```cpp
int a , b ;
cout  << "LCM is: "<< a * b / GCD;
```

## Towr fo hanoi
```cpp

void tower(int n , char beg, char aux , char endd){
    if(n == 1){
        cout << "Disk 1 is transferred from" << beg << " to " << endd << endl;
        return;
    }

    tower(n-1,beg , endd,aux);
    cout << "Disk " << n << " is transferred from " << beg << " to " << endd << endl;
    tower(n-1,aux,beg,endd);
}

int main(){
    tower(25, 'A', 'B', 'C');
    return 0;
}
```

## + points of Recursion
1. Short Logic
2. Easy to write and understand

## - point of Recursion
1. Slow Execution
2. More memory is required
   
Recursion uses stack in background for back track

Using recursion is a bad programming practice.
So if we have both recursive and non recursive solution then always use non recursive.