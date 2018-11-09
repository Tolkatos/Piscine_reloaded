#include <stdlib.h>

char    *ft_strdup(char *src)
{
    char    *dest;
    int     i;

    i = 0;
    dest = 0;
    while(src[i])
        i++;
    dest = malloc(sizeof(*src) * i);
    i = 0;
    while(src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return(dest);
}

int main(int argc, char *argv[])
{
    argc = 0;
    ft_strdup(argv[1]);
    return 0;
}
