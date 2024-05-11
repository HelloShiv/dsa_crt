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

int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);

    cout << middle(head);

    return 0;
}