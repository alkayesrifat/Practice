#include<bits/stdc++.h>
using namespace std;
vector<int> adj_list[1000];
bool visited_or_not[1000];
int parent[1000];


void bfs(int src){

    queue<int>q;
    q.push(src);
    visited_or_not[src] = true;
    

    while (q.empty() == false)
    {
        int front = q.front();
        q.pop();
        for (int x : adj_list[front])
        {
            if (visited_or_not[x] == false)
            {
                q.push(x);
                visited_or_not[x] = true;
                parent[x] = front;
            }
            
        }
        
    }
    

}

int main(){

    int node_number , edge_number;
    cin >> node_number >> edge_number;

    while (edge_number--)
    {
        int first , second;
        cin >> first >> second;
        adj_list[first].push_back(second);
        adj_list[second].push_back(first);
        
    }

    memset(visited_or_not,false,sizeof(visited_or_not));
    memset(parent,-1,sizeof(parent));
    int start , finish;
    cin >> start >> finish;

    bfs(start);

    vector<int> path;
    int node = finish;

    while(node != -1)
    {
        path.push_back(node);
        node = parent[node];
    }
    reverse(path.begin(),path.end());
    for(int x : path)
    {
        cout << x << " ";
    }
    
    
    

    return 0;
}