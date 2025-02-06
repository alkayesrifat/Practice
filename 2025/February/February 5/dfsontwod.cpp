#include<bits/stdc++.h>
using namespace std;
char arr[100][100];
bool visited[100][100];
vector<pair<int,int>>val = {{-1,0},{1,0},{0,-1},{0,1}};

void dfs(int sri,int srj){

    //printing the sri and srj
    cout << sri << " " << srj << endl << endl;
    visited[sri][srj] = true;
    for (int i = 0; i < 4; i++)
    {
        int childi , childj;
        childi = sri + val[i].first;
        childj = srj + val[i].second;
        cout << childi << " " << childj << endl;
    }
    


}

int main(){

    int n , m;
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