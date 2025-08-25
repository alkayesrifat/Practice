#include<bits/stdc++.h>
using namespace std;
int n,m;
int matrix[101][101];
bool visited[101][101];
int level[101][101];
pair<int,int> moves[] = {{-1,-2},{-2,-1},{-2,1},{1,-2},{2,-1},{2,1},{1,2},{-1,2}};
bool isValid(int x, int y) {
    return (x >= 0 && x < n && y >= 0 && y < m );
}
void bfs(int srci,int srcj){

    queue<pair<int,int>>q;
    q.push({srci,srcj});
    visited[srci][srcj] = true;
    level[srci][srcj] = 0;
    while (q.empty() == false)
    {
        pair<int,int>par = q.front();
        q.pop();
        for (int i = 0; i < 8; i++)
        {
            int childi = par.first + moves[i].first;
            int childj = par.second + moves[i].second;
            if (isValid(childi,childj) && visited[childi][childj] == false)
            {
                q.push({childi,childj});
                visited[childi][childj] = true;
                level[childi][childj] = level[par.first][par.second] +1;
            }
            

        }
        
    }
    

}
int main(){

    int test_case ;
    cin >> test_case;
    while (test_case--)
    {
        memset(visited,false,sizeof(visited));
        memset(level,-1,sizeof(level));
        cin >> n >> m;
        int ki,kj;
        cin >> ki >> kj;
        int qi , qj;
        cin >> qi >> qj;
        bfs(ki,kj);
        cout << level[qi][qj] << endl;
    }
    
    return 0;
}

