
#include <iostream>
#include <queue>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
node *binaryTree(node *root)
{
    cout << "enter data of node" << endl;
    int data;
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    root = new node(data);
    cout << "enter node left of " << data << endl;
    root->left = binaryTree(root->left);
    cout << "enter right node of " << data << endl;
    root->right = binaryTree(root->right);
    return root;
}
void inOrderTraversal(node *root)
{
    // if(root == NULL){
    //     return;
    // }
    // inOrderTraversal(root->left);
    // cout<<root->data<<" ";
    // inOrderTraversal(root->right);
}
void preOrderTraversal(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}
void postOrderTraversal(node *root)
{
    if (root == NULL)
    {
        return;
    }
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->data << " ";
}
void levelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}
void buildFromLevelOrder(node *&root)
{
    queue<node *> q;
    int data;
    cout << "enter the data of root" << endl;
    cin >> data;
    root = new node(data);
    q.push(root);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        cout << "enter the left node of" << temp->data << endl;
        int leftData;
        cin >> leftData;

        if (leftData != -1)
        {
            temp->left = new node(leftData);
            q.push(temp->left);
        }
        cout << "enter the right node of" << temp->data << endl;
        int rightData;
        cin >> rightData;

        if (rightData != -1)
        {
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
}
int main()
{
    node *root = NULL;
    // root = binaryTree(root);
    // cout<<"level order traversal"<<endl;
    // levelOrderTraversal(root);
    // cout<<endl;
    // cout<<"inorder traversal is "<<endl;
    // inOrderTraversal(root);
    // cout<<endl;
    // cout<<"preorder traversal is "<<endl;
    // preOrderTraversal(root);
    // cout<<endl;
    // cout<<"postorder traversal is "<<endl;
    // postOrderTraversal(root);
    buildFromLevelOrder(root);
    levelOrderTraversal(root);

    return 0;
}
// 3 5 7 -1 -1 8 -1 -1 13 11 -1 -1 -1