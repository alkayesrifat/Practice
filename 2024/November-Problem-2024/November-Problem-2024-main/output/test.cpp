#include <bits/stdc++.h>
using namespace std;
int n, m;
char mat[10000][10000];
bool visited[10000][10000];
pair<int, int> par[10000][10000];
bool isValid(int x, int y)
{
    return (x >= 0 && x < n && y >= 0 && y < m);
}

vector<pair<int, int>> moves = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

void bfs(int sri, int srj)
{

    queue<pair<int, int>> q;
    q.push({sri, srj});
    visited[sri][srj] = true;

    while (q.empty() == false)
    {
        pair<int, int> parent = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int childi = parent.first + moves[i].first;
            int childj = parent.second + moves[i].second;
            if (visited[childi][childj] == false && isValid(childi, childj) && (mat[childi][childj] == '.' || mat[childi][childj] == 'R' || mat[childi][childj] == 'D'))
            {
                q.push({childi, childj});
                visited[childi][childj] = true;
                par[childi][childj] = {parent.first, parent.second};
            }
        }
    }
}

int main()
{

    cin >> n >> m;
    pair<int, int> src;
    pair<int, int> dest;
    memset(visited, false, sizeof(visited));
    memset(par, -1, sizeof(par));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
            if (mat[i][j] == 'R')
            {
                src = {i, j};
            }
            if (mat[i][j] == 'D')
            {
                dest = {i, j};
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j] == '.' && visited[i][j] == false)
            {
                bfs(i, j);
            }
        }
    }

    int x = dest.first;
    int y = dest.second;

    while (1)
    {

        if (mat[x][y] == 'D') // This condition will never be true because 'A' is not defined in the input
        {
            break;
        }
        mat[x][y] = 'o';
        x = par[x][y].first;
        y = par[x][y].second;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
