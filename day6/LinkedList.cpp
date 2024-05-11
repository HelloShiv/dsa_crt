#include <iostream>
using namespace std;

class Node{     // Self Referential class 
    public:
        int data;
        Node *next;

        Node(): data(0) , next(nullptr){}
        Node(int data ): data(data) , next(nullptr){}
        Node(int data , Node* n): data(data) , next(n){}
        ~Node(){
            Node* current = this;
            while (current != nullptr) {
            Node* next = current->next;
            delete current;
            current = next;
        }            
        }
};

void insertAtEnd(Node *ptr , int data){
    if(ptr == nullptr){
        ptr = new Node(data);
    }
    Node *head = ptr;
    while(head->next){
        head = head->next;
    }
    head->next = new Node(data);
}

Node* insertFirst(Node *head,int data){
    Node *one;
    one = new Node(data);
    one->next = head;
    return one;
}

int count(Node* head){
    int count = 0;
    while(head){
        count++;
        head = head->next;
    }
    return count;
}

void del(int data,Node *head){
    Node *ptr = head , *preptr;
    if(ptr == nullptr)
        return ;
    else if( head->data == data)
        head = head->next;
    else
    {
        while(ptr && ptr->data != data){
            preptr = ptr;
            ptr = ptr->next;
        }
        if(ptr == nullptr){
            cerr << "Element not found: ";
            return;
        }

        preptr->next = ptr->next;
    }
}

int main(){
    // Node n1(10), n2(20);
    // n1.next =  &n2;
    // n2.next = nullptr;

    // cout << n1.data;
    // cout << " " << n1.next->data;

    Node *n2 = new Node(20);
    Node *n1 = new Node(10,n2);
    // n1->next = n2;

    insertAtEnd(n1, 30);
    n1 = insertFirst(n1, 5);

    del(5,n1);

    Node *ptr = n1;
    while(ptr){
        cout << " " << ptr->data;
        ptr = ptr->next;
    }

    cout <<endl<< count(n1)<<" : elements total";

    return 0;
}

// 1    2   3   4   
//  