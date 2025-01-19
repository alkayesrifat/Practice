#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    int array[n+3];
    int count = 0;
    for (int i = 0; i < n ; i++)
    {
        scanf("%d",&array[i]);
    }
    int f[100009] = { 0};

    for (int i = 0; i < n; i++)
    {
        f[array[i]]++;
        
        
    }
    for (int i = 0; i < n; i++)
    {
        if (f[array[i]]==1)
        {
            count++;
        }
    }
    printf("%d",count);
    
    
    

    



    return 0;
}
