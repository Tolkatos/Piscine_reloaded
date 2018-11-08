#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    int     i;
    
    i = 0;
    while(str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
}

int     main(int argc, char **argv)
{
    argc = 0;
    ft_putstr(argv[1]);
    return (0);
}
