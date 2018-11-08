#include <stdio.h>
int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}

int     main(int argc, char **argv)
{
    argc = 0;
    printf("%d", ft_strlen(argv[1]));
    return (0);
}
