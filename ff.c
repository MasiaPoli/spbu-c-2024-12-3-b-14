#include "ff.h"
int* ff_change_array(int* a, int* e)
{
    int* b=a;
    int* c=a;
    while(c!=e)
    {
        int* d=a;
        int f=1;
        while(d!=b)
        {
            if(*d==*c)
            {
                f=0;
                break;
            }
            d++;
        }
        if(f)
        {
            *b=*c;
            b++;
        }
        c++;
    }
    return b;
}
