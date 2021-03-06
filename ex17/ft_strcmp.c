#include <stdio.h>

int     ft_strcmp(char *s1, char *s2)
{
    int     i;

    i = 0;
    while (s1[i] || s2[i])
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (s1[i] - s2[i]);
}

int     main(int argc, char **argv)
{
    argc = 0;
    printf("%d", ft_strcmp(argv[1], argv[2]));
    return (0);
}
