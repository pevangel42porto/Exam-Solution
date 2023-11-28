#include <stdlib.h>

int *ft_rrange(int start, int end)
{
    int *rrange;
    int size, i;
    
    size = (start > end) ? (start - end) + 1 : (end - start) + 1;
    
    rrange = (int *)malloc(sizeof(int) * size);

    if (rrange == NULL) 
        return NULL;
    for (i = 0; i < size; ++i)
    {
        rrange[i] = end;
        end += (start > end) ? 1 : -1;
    }

    return rrange;
}

