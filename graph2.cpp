#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;
class graph
{
public:
    unordered_map<int, list<int>> gph;

    void addEdge(int a, int b, bool direction)
    {
        gph[a].push_back(b);
        if (!direction)
        {
            gph[b].push_back(a);
        }
    }
    void printEdge()
    {
        for (auto i : gph)
        {
            cout << i.first << "->";
            for (auto j : i.second)
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }
};
int main()
{
    cout << "enter the number of nodes " << endl;
    int n;
    cin >> n;
    int e;
    cout << "enter the number of edges" << endl;
    cin >> e;
    graph g;
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v, 0);
    }
    g.printEdge();
}