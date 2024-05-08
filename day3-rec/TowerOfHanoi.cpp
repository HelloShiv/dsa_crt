#include <iostream>
#include <string>
using namespace std;

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
    tower(3, 'A', 'B', 'C');
    return 0;
}