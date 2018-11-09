int     ft_count_if(char **tab, int(*f)(char*))
{
    int     i;
    int     j;
    int     r;

    i = 0;
    j = 0;
    r = 0;
    while(tab[i])
    {
        while(tab[i][j])
        {
            if (f(tab[i][j]))
                r++;
            j++;
        }
        i++;
    }
    return (r);
}
