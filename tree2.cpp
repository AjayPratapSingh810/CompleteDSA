#include <iostream>
#include <queue>
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
Node *binaryTree(Node *root)
{
    cout << "enter the data " << endl;
    int d;
    cin >> d;

    if (d == -1)
    {
        return NULL;
    }
    root = new Node(d);
    cout << "enter the left data of " << d << endl;
    root->left = binaryTree(root->left);

    cout << "enter the right data of " << d << endl;
    root->right = binaryTree(root->right);

    return root;
}
void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *front = q.front();
        cout << front->data << " ";
        q.pop();
        if (front->left)
        {
            q.push(front->left);
        }
        if (front->right)
        {
            q.push(front->right);
        }
    }
}
void inorderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorderTraversal(root->left);
    cout << root->data << endl;
    inorderTraversal(root->right);
}
int main()
{
    Node *root = NULL;
    root = binaryTree(root);
    inorderTraversal(root);
    levelOrderTraversal(root);
    return 0;
}