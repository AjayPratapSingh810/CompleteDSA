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
        cout<<"value deleted from list is : "<<val<<endl; 
    }
};
void insertNode(Node * &tail,int element,int data){
    Node * temp = new Node(data);
    Node * curr = tail;
    if(curr == NULL){
        tail = temp;
        temp->next = temp;
        temp->prev = temp;  
    }else{
        do{
            curr= curr->next;
        }while(curr->data != element);

        temp->next = curr->next;
        curr->next->prev = temp;
        curr->next = temp;
        temp->prev = curr;
    }
}
void deleteNode(Node * &tail,int data){
    Node * pre = tail->prev;
    Node *temp = tail;
    if(tail == NULL){
        return;
    }
    if(pre == tail){
        delete(pre);
        tail = NULL;
        return;
    }
    if(data == temp->data){
        pre->next = temp->next;
        temp->next->prev = pre;
        temp->prev = NULL;
        temp->next=NULL;
        tail = pre->next;
        delete(temp);
        return;
    }
    while(temp->data != data){
        pre = temp;
        temp= pre->next;
    }
    pre->next = temp->next;
    temp->next->prev = pre;
    temp->prev = NULL;
    temp->next=NULL;
    delete(temp);
}
void print(Node * tail){
    if(tail == NULL){
        cout<<"your C linked list is empty"<<endl;
        return;
    }
    Node * temp = tail;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=tail);
    cout<<endl;
}
int main(){
    Node * tail = NULL;
    insertNode(tail,5,5);
    insertNode(tail,5,10);
    insertNode(tail,10,20);
    insertNode(tail,5,70);
    insertNode(tail,10,6);
    insertNode(tail,6,15);
    print(tail);
    deleteNode(tail,5);
    print(tail);
    return 0;
}