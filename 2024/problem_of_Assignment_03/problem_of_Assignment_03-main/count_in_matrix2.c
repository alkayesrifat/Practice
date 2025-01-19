#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n, m, x;

    scanf("%d %d %d", &n, &m, &x);

    int array[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }


    for (int i = 0; i < x; i++)
    {
        int searchnum;
        int count = 0;

        scanf("%d", &searchnum);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (array[i][j]==searchnum)
                {
                    count++;
                }
                
            }
        }
        printf("%d\n",count);
    }

    return 0;
}
