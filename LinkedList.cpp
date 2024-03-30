#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    // Destructor
    ~Node(){
        int value = this->data;
        // memory free
        // if(this->next != NULL){
        //     delete next;
        //     this->next=NULL;
        // } 
        cout<<"memory is free of data "<<value<<endl;
    }
};
Node* insertAtHead(Node * &head,int data){
    Node * temp = new Node(data);
    temp->next = head;
    head = temp;
    return head;
}
void insertAtTail(Node * &tail,int data){
    Node * temp = new Node(data);
    tail->next = temp;
    tail = temp;
}
void insertAtMiddle(Node * &head,Node * &tail,int data,int position){
    Node * temp = new Node(data);
    Node * curr = head;
    if(position == 1){
        temp->next = head;
        head = temp;
    }else{      
         for(int i=1;i<position-1;i++){
            curr = curr->next;
         }
         if(curr->next == NULL){
            insertAtTail(tail,data);
            return;
         }
        //  temp->next = curr->next;
        //  curr->next = temp;
    }
   
}
void deleteNode(Node * &head,int position){
    Node * pre = NULL;
    Node * temp = head;
    if(position == 1){
        head = temp->next;
        temp->next = NULL;
        delete(temp);
        return;
    }
    for(int i=1;i<position;i++){
        pre = temp;
        temp=pre->next;
    }
    pre->next = temp->next;
    temp->next = NULL;
    delete(temp);
}
void print(Node * head){
    Node * temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    Node* head = new Node(10);
    Node* tail = head;
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;
    insertAtHead(head,20);
    insertAtHead(head,30);
    insertAtHead(head,50);
    //print(head);
    insertAtTail(tail,9);
    insertAtTail(tail,8);
    insertAtTail(tail,7);
    print(head);
    insertAtMiddle(head,tail,56,8);
    cout<<"linked list after insert at middle"<<endl;
    print(head);
    deleteNode(head,4);
    print(head);
    
    return 0;
}