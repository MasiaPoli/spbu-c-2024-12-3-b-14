#include <stdio.h>
#include <stdlib.h>
#include "readuk.h"
#include "ff.h"
int main()
{
    int a[1000];
    int n;
    printf ("Write a size\n");
    scanf("%d", &n);
    i_readuk(a, n);
    n=ff_change_array(a, a+n)-a;
    i_writeuk(a, n);
    return 0;
}
