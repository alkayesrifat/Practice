#include<bits/stdc++.h>
using namespace std;
int n,m;
char mat[1002][1002];
bool visited_or_not[1002][1002];
vector<pair<int,int>> movee = {{0,1},{0,-1},{-1,0},{1,0}};

void dfs(int sr,int sc){

    visited_or_not[sr][sc] = true;
    for (int i = 0; i < 4; i++)
    {
        int cr = sr + movee[i].first;
        int cc = sc + movee[i].second;
        if (visited_or_not[cr][cc] == false && mat[cr][cc]!='#'  && cr>=0 && cr<n && cc>=0 && cc<m )
        {
            
            dfs(cr,cc);
        }
        
    }
    

}


int main(){

    
    cin >> n >>m;
    // pair<int,int>oura;
    

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
            // if (mat[i][j] == '.')
            // {
            //     oura = {i,j};
            // }
            
            
        }
        
    }
    


    memset(visited_or_not,false,sizeof(visited_or_not));
    int count = 0;


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (visited_or_not[i][j] == false && mat[i][j] == '.')
            {
                dfs(i,j);
                count++;
            }
            
        }
    }

    cout << count;
    
    




    return 0;
}