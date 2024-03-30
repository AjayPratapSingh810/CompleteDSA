#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
void insertIntoBst(Node *&root, int data)
{
    if (root == NULL)
    {
        root = new Node(data);
        return;
    }
    if (data > root->data)
    {
        insertIntoBst(root->right, data);
    }
    else
    {
        insertIntoBst(root->left, data);
    }
}
Node *minVal(Node *&root)
{
    Node *temp = root;
    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}
Node *maxVal(Node *&root)
{
    Node *temp = root;
    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp;
}
Node *deleteNode(Node *&root, int d)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == d)
    {
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        else if (root->left != NULL && root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        else if (root->left == NULL && root->right != NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        else if (root->left != NULL && root->right != NULL)
        {
            Node *temp = minVal(root->right);
            int a = temp->data;
            root->data = a;
            root->right = deleteNode(root->right, a);
        }
    }
    else if (root->data > d)
    {
        deleteNode(root->left, d);
    }
    else
    {
        deleteNode(root->right, d);
    }
    return root;
}
void createBst(Node *&root)
{
    int d;
    cout << "enter the data" << endl;
    cin >> d;
    while (d != -1)
    {
        insertIntoBst(root, d);
        cout << "enter the data" << endl;
        cin >> d;
    }
}
void inOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
}
int main()
{
    Node *root = NULL;
    createBst(root);
    inOrderTraversal(root);
    deleteNode(root, 18);
    inOrderTraversal(root);
    return 0;
}