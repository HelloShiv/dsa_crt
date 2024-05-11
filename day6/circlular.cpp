#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
        Node(): data(0) , next(nullptr){}
        Node(int data): data(data) , next(nullptr){}
        Node(int data, Node *next): data(data) , next(next){}
};

int middle(Node* head){
    Node *ptr = head;
    Node *slow = head, *fast = head;

    while(fast->next != nullptr){
        slow = slow->next;
        fast = fast->next;
        if(fast->next!= nullptr){
            fast = fast->next;
        }
    }
    return slow->data;
}

void traverse(Node* tail){
    Node *ptr = tail;

    do{
        cout << ptr->data << " ";
        ptr = ptr->next;
    } while (ptr != tail);
}

void addlast(int item){
    Node *newnode;
    newnode = new Node(item, nullptr);
    if(tail == nullptr){
        newnode->next = newnode;
        tail = newnode;
    } else{
        newnode->next = tail->next;
        tail->next = newnode;
        tail = newnode;
    }
}

int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    head->next->next->next->next->next = head;

    Node *tail = head->next->next->next->next;


    traverse(tail);

    return 0;
}



