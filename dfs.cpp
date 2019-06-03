#include<bits/stdc++.h>
using namespace std;
class graph
{
    int v;
    list<int>* adj;
    bool *visited;
    vector<int> ve;
public:
    graph(int v)
    {
        this->v=v;
        adj=new list<int>[v];
        visited=new bool[v];
        for(int i=0;i<v;i++)
            visited[i]=false;
    }
    void addEdge(int v,int w)
    {
        adj[v].push_back(w);
       //  adj[w].push_back(v);
    }
    void DFS(int s)
    {list<int>:: iterator i;
        visited[s]=true;
            ve.push_back(s);
            for(i=adj[s].begin();i!=adj[s].end();i++)
            {
                if(!visited[*i])
                {cout<<"adj to "<<s<<" :"<<*i<<endl;
                    DFS(*i);
                }
            }
            cout<<endl;
        }
    void print()
    {
        for(int i=0;i<ve.size();i++)
            cout<<ve[i]<<" ";
    }
};
int main()
{vector<int> v;
    graph g(6);
    g.addEdge(0,1);
    g.addEdge(4,2);
    g.addEdge(1,2);
    g.addEdge(2,5);
    g.addEdge(4,3); 
    g.addEdge(3,0);
    g.addEdge(5,1);
    g.DFS(4);
    g.print();
}