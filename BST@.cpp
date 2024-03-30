#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node * left;
    Node * right;
    Node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
void insertIntoBST(Node * &root,int d){
    if(root == NULL){
        root = new Node(d);
        return;
    }
    if(d < root->data){
        insertIntoBST(root->left,d);
    }
    else{
        insertIntoBST(root->right,d);
    }
}
void createBST(Node * &root){
    cout<<"enter the data"<<endl;
    int data;
    cin>>data;
    while(data != -1){
        insertIntoBST(root,data);
        cout<<"enter the data"<<endl;
        cin>>data;
    }
}
void levelOrderTraversal(Node * &root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node * temp = q.front();
        q.pop();
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            cout<<temp->data<<" ";
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
        }
        
    }
}
void inOrderTraversal(Node * root){
    if(root == NULL){
        return;
    }
    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);
}
Node* maxValue(Node * root){
    Node * temp = root;
    while(temp->right != NULL){
        temp = temp->right;
    }
    return temp;
}
Node* minValue(Node * root){
    Node * temp = root;
    while(temp->left != NULL){
        temp = temp->left;
    }
    return temp;
}
Node * deleteNode(Node * &root,int d){
    if(root == NULL){
        return NULL;
    }
    if(root->data == d){
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }
        else if(root->left != NULL && root->right == NULL){
            Node * temp = root->left;
            delete root;
            return temp;
        }
        else if(root->left == NULL && root->right != NULL){
            Node * temp = root->right;
            delete root;
            return temp; 
        }
        else if(root->left != NULL && root->right != NULL){
            Node * temp = minValue(root->right);
            int a = temp->data;
            root->data = a;
            root->right = deleteNode(root->right,a);
        }
    }
    else if(root->data > d){
        deleteNode(root->left,d);
    }else{
        deleteNode(root->right,d);
    }
    return root;
}
int main(){
    Node * root = NULL;
    createBST(root);
    levelOrderTraversal(root);
    inOrderTraversal(root);
    cout<<endl;
    // cout<<"maximunm value is : "<<maxValue(root)<<endl;
    // cout<<"minimum value is : "<<minValue(root)<<endl;
    deleteNode(root,10);
    inOrderTraversal(root);
    return 0;
}

// 10 6 11 4 7 13 11 15 4 3 2 1 -1