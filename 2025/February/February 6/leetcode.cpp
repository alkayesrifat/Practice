#include <bits/stdc++.h>
using namespace std;
int arr[100][100];
bool visited[100][100];
vector<pair<int, int>> val = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int n, m;

bool valid_or_not(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
    {
        return false;
    }
    return true;
}

void bfs(int si, int sj,int target)
{
    int sw = arr[si][sj];

    queue<pair<int, int>> q;
    q.push({si, sj});
    visited[si][sj] = true;

    while (q.empty() == false)
    {
        pair<int, int> t = q.front();
        q.pop();

        if (arr[t.first][t.second] == sw)
        {
            arr[t.first][t.second] = target;
        }
        

        for (int i = 0; i < 4; i++)
        {
            int ii = t.first + val[i].first;
            int jj = t.second + val[i].second;
            if (valid_or_not(ii, jj) && visited[ii][jj] == false)
            {
                q.push({ii,jj});
                visited[ii][jj] = true;
            }
        }
    }
}

int main() {
    cin >> n >> m;
    
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> arr[i][j];

    int si, sj;
    cin >> si >> sj;
        for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << endl << endl;
    
    memset(visited, false, sizeof(visited));
    bfs(si, sj,2);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}