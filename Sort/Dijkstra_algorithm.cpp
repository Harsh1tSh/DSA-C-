#include<iostream>
#include<set>
#include<list>
#include<climits>
#include<vector>
using namespace std;

class Graph{
    list<pair<int,int>> *l;
    int V;
public:
    Graph(int v){
        V = v;
        l = new list<pair<int, int>>[V];
    }
    void addEdge(int u, int v, int wt, bool undir = true){
        l[u].push_back({wt,v});
        if(undir){
            l[v].push_back({wt,u});
        }
    }

    int dijkstra(int src, int dest){
        //data structures
        vector<int> dist(V,INT_MAX);
        set<pair<int,int>> s;

        // Intialize
        dist[src] = 0;
        s.insert({0,src});
        while(!s.empty()){
            auto it = s.begin();
            int node = it->second;
            int distTillnow = it->first;
            s.erase(it); //pop

            //iterate over neigbours of node
            for(auto nbrpair : l[node]){
                int nbr = nbrpair.second;
                int currentEdge = nbrpair.first;

                if(distTillnow + currentEdge < dist[nbr]){
                    //remove if nbr already exist
                    auto f = s.find({dist[nbr],nbr});
                    if(f != s.end()){
                        s.erase(f);
                    }
                    // insert the updated value with the new dist
                    dist[nbr] = distTillnow + currentEdge;
                    s.insert({dist[nbr],nbr}); 
                }
            }
        }
        // single source shortest distance
        for(int i=0;i<V;i++){
            cout << "Node i " << i << " Dist " << dist[i] << endl;
        }
        return dist[dest];
    }
};

int main(){
    Graph g(5);
    g.addEdge(0,1,1);
    g.addEdge(1,2,1);
    g.addEdge(0,2,4);
    g.addEdge(0,3,7);
    g.addEdge(3,2,2);
    g.addEdge(3,4,3);
    cout << g.dijkstra(0,4) << endl;

    return 0;
}