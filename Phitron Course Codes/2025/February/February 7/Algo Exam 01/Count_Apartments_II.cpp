#include<bits/stdc++.h>
using namespace std;
int n,m;
char mat[1002][1002];
bool visited_or_not[1002][1002];
vector<pair<int,int>> movee = {{0,1},{0,-1},{-1,0},{1,0}};
int coun ;
void dfs(int sr,int sc){

    visited_or_not[sr][sc] = true;coun++;
    for (int i = 0; i < 4; i++)
    {
        int cr = sr + movee[i].first;
        int cc = sc + movee[i].second;
        if (cr >= 0 && cr < n && cc >= 0 && cc < m && !visited_or_not[cr][cc] && mat[cr][cc] != '#' )
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
    
    vector<int>result;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (visited_or_not[i][j] == false && mat[i][j] == '.')
            {
                coun = 0;
                dfs(i,j);
                result.push_back(coun);
            }
            
        }
    }
    if (result.empty()) {
        cout << "0";
        return 0;
    }

    sort(result.begin(), result.end());
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    
    




    return 0;
}