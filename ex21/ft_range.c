#include <stdlib.h>

int     *ft_range(int min, int max)
{
    int     *r;
    int     i;

    i = 0;
    r = NULL;
    if(min >= max)
        return(r);
    r = malloc(sizeof(int) * (max - min));
    while (min < max)
    {
        r[i] = min;
        min++;
        i++;
    }
    return (r);
}
