#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node * left  = NULL;
    Node * right = NULL;
    Node(int data){
        this->data = data;
        this->right = NULL;
        this->left = NULL;
    }
};

void insertIntoBinary(Node * &root,int d){
    if(root == NULL){
        root = new Node(d);
        return;
    }else{
        if(d < root->data){
            insertIntoBinary(root->left,d);
        }else{
            insertIntoBinary(root->right,d);
        }
    }
}
void BST(Node * &root){
    int data;
    cout<<"enter your data"<<endl;
    cin>>data;
    while(data != -1){
        insertIntoBinary(root,data);
        cout<<"enter your data"<<endl;
        cin>>data;   
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
void levelOrderTraversal(Node * root){
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
Node * minVal(Node * root){
    Node * temp = root;
    while(temp->left != NULL){
        temp = temp->left;
    }
    return temp;
}
Node * maxVal(Node * root){
    Node * temp = root;
    while(temp->right != NULL){
        temp = temp->right;
    }
    return temp;
}
Node * deleteNode(Node * &root,int d){
    if(root == NULL){
        return root;
    }
    if(root->data == d){
        // 0 child
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }
        if(root->left == NULL && root->right != NULL){
            Node * temp = root->right;
            delete root;
            return temp;
        }
        if(root->left != NULL && root->right == NULL){
            Node * temp = root->left;
            delete root;
            return temp;
        }
        if(root->left != NULL && root->right != NULL){
             Node * mini = minVal(root->right);
             int min = mini->data;
             root->data = min;
             root->right = deleteNode(root->right,min);
             return root; 
        }

    }else if(root->data > d){
        root->left = deleteNode(root->left,d);
        return root;
    }else{
        root->right = deleteNode(root->right,d);
        return root;
    }
    return NULL;
}
//10 8 21 7 27 5 4 3 -1
int main()
{
    Node * root = NULL;
    BST(root);
    levelOrderTraversal(root);
    inOrderTraversal(root);
    cout<<endl;
    cout<<"minimum value in tree is "<< minVal(root)->data<<endl;
    cout<<"minimum value in tree is "<< maxVal(root)->data<<endl;
    deleteNode(root,10);
    inOrderTraversal(root);
    levelOrderTraversal(root);
    deleteNode(root,6);
    levelOrderTraversal(root);
    return 0;
}
// 8 3 10 1 6 14 4 7 13 -1