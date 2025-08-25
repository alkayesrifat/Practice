#include<bits/stdc++.h>
using namespace std;

int main(){

    int n , e;
    cin >> n >> e;
    int mat[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mat[i][j] = INT_MAX;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int a , b ,c ;
            cin >>a >>b >>c;
            mat[a][b] =c ;
            if (i == j)
            {
                mat[i][j] = 0;
            }
            
        }
        
    }

    for (int k = 0; k < n ; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (mat[i][k]!= INT_MAX && mat[k][j]!= INT_MAX  && mat[i][k] + mat[k][j] < mat[i][j])
                {
                    mat[i][j] = mat[i][k] + mat[k][j];
                }
                
                
            }
            
        }
    
    }
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] <0)
            {
                flag = true;
            }
            
            
        }
        
    }

    if (flag )
    {
        cout << "Cycle detected and i am rejected" << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(mat[i][j] == INT_MAX)cout << "i" <<" ";
                else cout << mat[i][j] << " ";
                
            }
            cout << endl;
            
        }
    
    }
    
    

    
    
    
    return 0;
}