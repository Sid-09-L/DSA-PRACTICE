//Building A graph Using Adjacency List

#include<iostream>
#include<vector>
#include<list>
using namespace std;

class graph{
    int V;
    list<int>* l;

    public:
        graph(int V){
            this->V=V;
            l=new list<int> [V];
        }

        void addedge(int u,int v){
            l[u].push_back(v);
            l[v].push_back(u);
        }

        void DFS(int u,vector<bool> &vis){              //Time Complexity=O(V+E)
            vis[u]=true;
            cout<<u<<" ";

            list<int> neighbour=l[u];
            for(int v:neighbour){
                if(!vis[v]){
                    DFS(v,vis);
                }
            }

        }
        void print(){
            for(int u=0;u<V;u++){
                list<int>neighbours=l[u];
                cout<<u<<":";
                for(int v:neighbours){
                    cout<<v<<" ";
                }
                cout<<endl;
            }
        }
};
int main(){
    graph g(7);

    g.addedge(0,1);
    g.addedge(0,2);
    g.addedge(1,3);
    g.addedge(2,4);
    g.addedge(3,4);
    g.addedge(3,5);
    g.addedge(4,5);
    g.addedge(5,6);

    vector<bool>vis(7,false);
    g.DFS(0,vis);
    // g.print();
    
    return 0;
}