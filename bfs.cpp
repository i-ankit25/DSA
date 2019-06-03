#include<bits/stdc++.h>
using namespace std;
class graph
{
    int v;
    list<int>* adj;
public:
    graph(int v)
    {
        this->v=v;
        adj=new list<int>[v];
    }
    void addEdge(int v,int w)
    {
        adj[v].push_back(w);
        adj[w].push_back(v);
    }
    vector<int> BFS(int s)
    { vector<int> ve;
        bool *visited=new bool[v];
        for(int i=0;i<v;i++)
         visited[i]=false;
        queue<int>q;
        visited[s]=true;
        q.push(s);
        list<int> :: iterator i;
        while(!q.empty())
        {
            s=q.front();
            ve.push_back(s);
            //cout<<s<<" "<<endl;
            q.pop();
            for(i=adj[s].begin();i!=adj[s].end();i++)
            {cout<<"adj to "<<s<<" :";
                if(!visited[*i])
                {
                    visited[*i]=true;
                    cout<<*i<<" "<<endl;
                    q.push(*i);
                }
            }
            cout<<endl;

        }
      return ve;
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
    g.addEdge(3,3);
    g.addEdge(5,1);
    v=g.BFS(4);
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
}