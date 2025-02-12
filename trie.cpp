#include <iostream>
using namespace std;
class TrieNode
{
public:
    char data;
    TrieNode *children[26];
    bool isTerminal;
    TrieNode(char ch)
    {
        data = ch;
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        isTerminal = false;
    }
};
class Trie
{
public:
    TrieNode *root;
    Trie()
    {
        root = new TrieNode('\0');
    }
    void insertUtil(TrieNode *root, string word)
    {
        if (word.length() == 0)
        {
            root->isTerminal = true;
            return;
        }
        int index = word[0] - 'A';
        TrieNode *child;
        if (root->children[index] == NULL)
        {
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }
        else
        {
            child = root->children[index];
        }
        insertUtil(child, word.substr(1));
    }
    void insertString(string word)
    {
        insertUtil(root, word);
    }
    bool searchUtil(TrieNode *root, string word)
    {
        if (word.length() == 0)
        {
            return root->isTerminal;
        }
        int index = word[0] - 'A';
        TrieNode *child;
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            return false;
        }
        // recursion
        return searchUtil(child, word.substr(1));
    }
    bool searchString(string word)
    {
        return searchUtil(root, word);
    }
};
int main()
{
    Trie *t = new Trie();
    t->insertString("ABBDB");
    t->insertString("TIME");
    t->insertString("AJAY");
    cout << "is string available : " << t->searchString("ABBDB") << endl;
    cout << "is string available : " << t->searchString("TIME") << endl;
    cout << "is string available : " << t->searchString("TIM") << endl;
    return 0;
}