#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node * prev;
    Node * next;

    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
    ~Node(){
        int val = this->data;
        cout<<"the deleted value is "<<val<<endl;
    }
};
void insertAtHead(Node * &head,int data){
    Node * temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
}
void insertAtTail(Node * &tail,int data){
    Node * temp = new Node(data);
    tail ->next = temp;
    temp->prev = tail;
    tail = temp;
}
int getLen(Node * head){
    int count=0;
    Node * temp = head;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}
void insertAtPosition(Node * &head,Node * &tail,int data,int position){
    Node * temp = new Node(data);
    Node * curr = head;
    if(position == 1){
        insertAtHead(head,data);
        return;
    }
    int len = getLen(head)+1;
    if(position == len){
        insertAtTail(tail,data);
        return;
    }
    for(int i =1;i<position-1;i++){
        curr = curr->next;
    }
    curr->next->prev = temp;
    temp->next = curr->next;
    curr->next = temp;
    temp->prev = curr;
}
void deleteNode(Node * &head,Node * &tail,int position){
    Node* temp = head;
    Node * pre = NULL;
    if(position == 1){
        temp->next->prev = NULL;
        head = temp->next; 
        temp->next = NULL;
        delete(temp);
        return;
    }
    for(int i =1;i<position;i++){
        pre = temp;
        temp = pre -> next;
    }
    if(temp->next == NULL){
        pre->next = NULL;
        tail= pre;
        temp->prev = NULL;
        delete(temp);
        return;
    }
    pre->next = temp->next;
    temp->next->prev = pre;
    temp->prev = NULL;
    temp->prev = NULL;
    delete(temp);
}
void print(Node * head){
    Node * temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }cout<<endl;
}

int main(){
    Node * node1 = new Node(10);
    Node * head = node1;
    Node * tail = node1;
    print(head);
    cout<<"length of list is : "<<getLen(head)<<endl;
    insertAtHead(head,20);
    insertAtHead(head,30);
    insertAtHead(head,50);
    insertAtTail(tail,8);
    insertAtTail(tail,5);
    print(head);
    insertAtPosition(head,tail,567,3);
    print(head);
    insertAtPosition(head,tail,123,1);
    print(head);
    insertAtPosition(head,tail,890,4);
    print(head);
    insertAtPosition(head,tail,89001,10);
    print(head);
    deleteNode(head,tail,5);
    print(head);
    deleteNode(head,tail,1);
    deleteNode(head,tail,8);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;
    return 0;
}