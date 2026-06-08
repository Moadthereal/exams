#include <unistd.h>
char ft_print_mirror(char c)
{
    if (c >= 'a' && c <= 'z')
    return ('z' - (c - 'a'));
    else if (c >= 'A' && c <= 'z')
    return ('Z' - (c - 'A'));
    else 
    return (c);
    // 122 - (100 - 97)
}
int main(int ac, char **av)
{
    char c;
    if (ac == 2)
    {
        while (*av[1])
        {
            c = ft_print_mirror(*av[1]);
            write(1, &c, 1);
            av[1]++;
        }
    }
    write(1, "\n", 1);
    return (0);
}