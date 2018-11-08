#include <stdio.h>

int     ft_iterative_factorial(int nb)
{
    int     ret;
    int     i;

    ret = 1;
    i = 1;
    while(i <= nb)
        {
            ret *= i;
            i++;
        }
    printf("%d", ret);
    return (ret);
}

int     main(void)
{
    ft_iterative_factorial(10);
    return (0);
}
