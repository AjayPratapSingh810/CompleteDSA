#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;
class graph{
    public:
        unordered_map<int,list<int> > adj;

        void addEdge(int u,int v,bool direction){
            adj[u].push_back(v);
            // direction == 1 means directed
            // direction == 0 means undirected
            if(!direction){
                adj[v].push_back(u);
            }
        }

        void printGraph(){
            for(auto i : adj){
                cout<<i.first<<" -> ";
                for(auto j : i.second){
                    cout<<j<<" , ";
                }cout<<endl;
            }
        }
};
int main(){
    cout<<"enter the number of nodes"<<endl;
    int n;
    cin>>n;
    cout<<"enter the number of edges"<<endl;
    int m;
    cin>>m;
    graph g;
    for(int i=0;i<m;i++){
        int u;
        int v;
        cin >> u >> v;
        g.addEdge(u,v,0);
    }
    g.printGraph();
    return 0;
}

// 1 2
// 2 3
// 2 4
// 3 4
// 4 5
// 5 1