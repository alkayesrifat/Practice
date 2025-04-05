#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);

    int *array = (int*)malloc(1*sizeof(int));
    int *temp = array;

    if (array==NULL)
    {
        array = temp;
    }
    

    array = (int*)realloc(array,n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",array[i]);
    }
    free(array);






    return 0;
}
