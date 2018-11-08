#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int     ft_strcmp(char *s1, char *s2);
int     ft_putstr(char *str);

int     main(int argc, char **argv)
 {
     int     i;
     char    cmp;
     char    *tmp;

     i = 1;
     cmp = 0;
     tmp = 0;
     while (i < argc - 1)
     {
         cmp = ft_strcmp(argv[i], argv[i + 1]);
         if (cmp == 0 || cmp < 0)
             i++;
         else
         {
             tmp = argv[i];
             argv[i] = argv[i + 1];
             argv[i + 1] = tmp;
             i = 0;
         }
     }
     i = 1;
     while (i < argc)
     {
         ft_putstr(argv[i++]);
         ft_putchar('\n');
     }
     return (0);
 }
