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
        if (visited_or_not[cr][cc] == false && ( mat[cr][cc]=='.' || mat[cr][cc]=='B'|| mat[cr][cc]=='A') && cr>=0 && cr<n && cc>=0 && cc<m )
        {
            
            dfs(cr,cc);
        }
        
    }
    

}


int main(){

    
    cin >> n >>m;
    pair<int,int>oura;
    pair<int,int>ourb;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
            if (mat[i][j] == 'A')
            {
                oura = {i,j};
            }
            if (mat[i][j] == 'B')
            {
                ourb = {i,j};
            }
            
        }
        
    }
    


    memset(visited_or_not,false,sizeof(visited_or_not));


    dfs(oura.first,oura.second);

    if (visited_or_not[ourb.first][ourb.second] == true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    
    




    return 0;
}