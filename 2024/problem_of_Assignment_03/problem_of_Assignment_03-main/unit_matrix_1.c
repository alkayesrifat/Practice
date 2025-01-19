#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d",&n);
    int m[n][n];
    int dicount = 0;
    int countzero = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            
 
            if (m[i][j] == 0)
            {
                countzero++;
            }
        }
        if (m[i][i] == 1)
        {
            dicount++;
        }
    }
    // printf("%d",dicount);
    if (dicount == n)
    {
        if (countzero == ((n*n)-dicount))
        {
            printf("YES\n");
        }
        else{
            printf("NO\n");

        }
        


    }
    else
    {

        printf("NO\n");
    }

    return 0;
}
