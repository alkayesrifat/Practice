#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {


    int a,b;
    scanf("%d %d",&a,&b);

    int *pointerofa = &a;
    int *pointerofb = &b;

    int differance = abs(*pointerofa - *pointerofb);
    printf("%d",differance);









    return 0;
}
