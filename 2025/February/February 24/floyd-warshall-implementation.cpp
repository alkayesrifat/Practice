#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, e;
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

            int a, b, c;
            cin >> a >> b >> c;

            if (i == j)
            {
                mat[i][j] = 0;
            }

            mat[a][b] = c;
        }
    }

    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if ( mat[i][k]!= INT_MAX && mat[k][j]!= INT_MAX  && mat[i][k] + mat[k][j] < mat[i][j])
                {
                    mat[i][j] = mat[i][k] + mat[k][j];
                }
                
                
            }
            
        }
    }
    

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(mat[i][j] == INT_MAX)cout << "i" <<" ";
            else cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}