#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node * next;
    node(int data){
        this->data = data;
        this->next = NULL;
    }
    ~node(){

    }
};
void insertAtMiddle(node * &head,int data,int position){
    node * temp = head;
    if(position == 2){
        node * n = new node(data);
        n->next = temp->next;
        temp ->next = n;
    }
    while(position-2 != 0){
        temp = temp->next;
        position--;
    }
    node * n = new node(data);
    n->next = temp->next;
    temp ->next = n;
}
void insertAtHead(node * &head,node * &tail,int data){
    if(head == NULL){
        node *temp = new node(data);
        head = temp;
        tail = temp;
    }else{
        node * temp = new node(data);
        temp->next = head;
        head = temp;
    }
    
}
void insertAtTail(node * &head,node * &tail,int data){
    if(head == NULL){
        node *temp = new node(data);
        head = temp;
        tail = temp;
    }else{
         node * temp = new node(data);
        tail->next = temp;
        tail = temp;
    }
   
}
void deleteNode(node * &head,int position){
    node * prev = NULL;
    node * curr = head;
    if(position == 1){
        head = head->next;
        delete(curr);
        return;
    }
    while(position-1 != 0){
        prev = curr;
        curr = curr->next;
        position--;
    }
    prev ->next = curr->next;
    delete(curr);
}
void printList(node * &head){
    node * temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main(){
    node * head = NULL;
    node * tail = head;

    insertAtHead(head,tail,15);
    insertAtHead(head,tail,20);
    insertAtHead(head,tail,25);
    insertAtTail(head,tail,56);
    insertAtTail(head,tail,78);
    insertAtTail(head,tail,98);
    insertAtMiddle(head,4,2);
    deleteNode(head,4);
    // deleteNode(head,7);
    deleteNode(head,1);
    printList(head);
    return 0;
}