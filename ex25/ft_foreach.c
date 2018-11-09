#include <stdlib.h>
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}
void    ft_putnbr(int nb);
void    ft_foreach(int *tab, int length, void(*f)(int))
{
    int     i;

    i = 0;
    while(i < length)
    {
        f(tab[i]);
        i++;
    }
}

int main(int argc, char *argv[])
{
    int     tab[5] = {1, 2, 3, 4, 5};

    argc = 0;
    ft_foreach(tab, atoi(argv[1]), &ft_putnbr);
    return 0;
}
