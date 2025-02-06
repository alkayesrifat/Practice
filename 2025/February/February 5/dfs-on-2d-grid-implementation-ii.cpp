#include<bits/stdc++.h>
using namespace std;
char arr[100][100];
bool visited[100][100];
vector<pair<int,int>>val = {{-1,0},{1,0},{0,-1},{0,1}};
int n , m;

bool valid_or_not(int i , int j){
    if (i < 0 || i >=n || j < 0 || j >= m)
    {
        return false;
    }
    return true;
    

}


void dfs(int sri,int srj){

    //printing the sri and srj
    cout << sri << " " << srj << endl ;
    visited[sri][srj] = true;
    for (int i = 0; i < 4; i++)
    {
        int childi , childj;
        childi = sri + val[i].first;
        childj = srj + val[i].second;
        if(valid_or_not(childi,childj) && !visited[childi][childj]){
            dfs(childi,childj);
        }
    }
    


}

int main(){


    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0;  j< m; j++)
        {
            cin >> arr[i][j];
        }
        
    }
    memset(visited,false,sizeof(visited));
    int sri , srj ; 
    cin >> sri >> srj;

    dfs(sri,srj);
    

    return 0;
}