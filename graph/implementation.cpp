#include<bits/stdc++.h>
using namespace std;

class graph{
    public:
    unordered_map<int,list<int>>adj;

    void addEdge(int u,int v,bool direction){
        adj[u].push_back(v);
        if(direction==0){
            adj[v].push_back(u);
        }
    }
    void printAdjList(){
        for(auto it:adj){
            cout<<it.first<<" -> ";
            for(auto i:it.second){
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }
};

// 0 1
// 1 2
// 2 3
// 3 1
// 3 4
// 0 4

int main(){
    int n,m;
    cout<<"Enter the no of elements : "<<endl;
    cin>>n;
    cout<<"Enter the no of edges : "<<endl;
    cin>>m;
    graph g;

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        g.addEdge(u,v,0);
    }
    g.printAdjList();
    return 0;
}