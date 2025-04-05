#include <bits/stdc++.h>
using namespace std;
int n, m;
pair<int, int> src;
char mat[1000][1000];
bool visited[1000][1000];

pair<int, int> par[1000][1000];
bool isValid(int x, int y)
{
    return (x >= 0 && x < n && y >= 0 && y < m);
}

vector<pair<int, int>> moves = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

void bfs(int sri, int srj)
{

    queue<pair<int, int>> q;
    q.push({sri, srj});
    visited[sri][srj] = true;
    par[sri][srj] = {sri,srj};

    while (q.empty() == false)
    {
        pair<int, int> parent = q.front();
        q.pop();
        int parenti = parent.first;
        int parentj = parent.second;

        for (int i = 0; i < 4; i++)
        {
            int childi = parenti + moves[i].first;
            int childj = parentj + moves[i].second;
            if (visited[childi][childj] == false && isValid(childi, childj) && (mat[childi][childj] == '.' || mat[childi][childj] == 'R' || mat[childi][childj] == 'D'))
            {
                q.push({childi, childj});
                visited[childi][childj] = true;
                par[childi][childj] = {parenti, parentj};
           
                
            }
        }
    }
}

int main()
{

    cin >> n >> m;

    pair<int, int> dest;

  
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
            par[i][j] = {-1, -1};
            visited[i][j] = false;
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

    bfs(src.first, src.second);

    int x = dest.first;
    int y = dest.second;

    while (1)
    {

        
        if (x == -1 || y == -1)
        {
            break;
        }
        int xx = par[x][y].first;
        int yy = par[x][y].second;
        if (xx == -1 || yy == -1)
            break;

        if (mat[xx][yy] == 'R')
        {

            break;
        }
        mat[xx][yy] = 'X';

        x = xx;
        y = yy;

    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << mat[i][j];
        }
        cout << endl;
    }

    return 0;
}