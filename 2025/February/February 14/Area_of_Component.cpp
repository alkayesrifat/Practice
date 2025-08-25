
#include<bits/stdc++.h>

using namespace std;
char mat[1005][1005];
bool visited[1005][1005];
int n,m;
pair<int, int> moves[] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
bool isValid(int x, int y) {
    return (x >= 0 && x < n && y >= 0 && y < m );
}
int osamabinladen = INT_MAX ;
int countt ;

void dfs(int si,int sj){

    visited[si][sj] = true;
    countt ++;

    for (int i  = 0 ; i < 4 ; i++)
    {
        int childi = si + moves[i].first;
        int childj = sj + moves[i].second;
        if (visited[childi][childj] == false && isValid(childi,childj) && mat[childi][childj] == '.')
        {
            dfs(childi,childj);
            visited[childi][childj] = true;
        }
        
    }
    



}

int main(){

    
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m ; j++)
        {
            cin >> mat[i][j];
            visited[i][j] = false;
        }
        
    }
 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (visited[i][j] == false && mat[i][j] == '.')
            {
                countt = 0;
                dfs(i,j);
                osamabinladen = min(countt,osamabinladen);
            }
            
        }
        
    }
    if (osamabinladen == INT_MAX)
    {
        cout << -1 ;
    }
    else
        cout << osamabinladen;
    
   

    
    return 0;
}