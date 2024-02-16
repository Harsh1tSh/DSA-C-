#include<iostream>
#include<list>
#include<queue>
using namespace std;

class Graph{
    int V;
    list<int> *l;
// bidirectional edge is undirected graph
public:
    Graph(int v){
        V = v;
        l = new list<int>[V]; //array contains v number of linked list
    }

    void addEdge(int i, int j, bool undir = true){
        l[i].push_back(j);
        if(undir){
            l[j].push_back(i);
        }
    }

    void printAdjList(){
        for(int i=0;i<V;i++){
            cout << i << "-->";
            for(auto node : l[i]){
                cout << node <<  ",";
            }
            cout << endl;
        }
    }

    void bfs(int source){
        queue<int> q;
        bool *visited = new bool[V]{0};

        q.push(source);
        visited[source] = true;

        while(!q.empty()){
            int f = q.front();
            cout << f << endl;
            q.pop();

            //push neighbours of cureent nide inside q
            // if they are not already visited
            for(auto nbr : l[f]){
                if(!visited[nbr]){
                    q.push(nbr);
                    visited[nbr] = true;
                }
            }
        }
    }


    void dfsHelper(int node, bool *visited){
        visited[node] = true;
        cout << node<< "," << endl;
        // make a dfs call on unvisited neighbours
        for(int nbr : l[node]){
            if(!visited[nbr]){
                dfsHelper(nbr, visited);
            }
        }
        return;
    }


    void dfs(int source){
        bool *visited = new bool[V]{0};
        dfsHelper(source, visited);
    }


};

int main(){
    Graph g(7);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,5);
    g.addEdge(5,6);
    g.addEdge(4,5);
    g.addEdge(0,4);
    g.addEdge(3,4);

    g.dfs(1);
    return 0;
}