
int max(int *tab, unsigned int len)
{
    int i;
    int max;

    max = 0;
    i = 0;
    while (i < len)
    {
        if (max < tab[i])
        max = tab[i];
        i++;
    }
    return (max);
}