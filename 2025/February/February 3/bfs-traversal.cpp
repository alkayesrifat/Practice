#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1000];
bool arr[1000];

void bfs(int so)
{

    queue<int> q;
    q.push(so);
    arr[so] = true;

    while (q.empty() == false)
    {
        int t = q.front();
        q.pop();
        cout << t << " ";
        for (int x : adj_list[t])
        {
            if (arr[x] == false)
            {
                q.push(x);
                arr[x] = true;
                
            }
            
        }
    }
}

int main()
{

    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    memset(arr, false, sizeof(arr));

    bfs(0);

    return 0;
}