#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int ac, char **av)
{
    long nb1;
    long nb2;
    long res;

    if (ac == 4)
    {
        nb1 = atoi(av[1]);
        nb2 = atoi(av[3]);

        if (*av[2] == '*')
            res = nb1 * nb2;
        else if (*av[2] == '+')
            res = nb1 + nb2;
        else if (*av[2] == '-')
            res = nb1 - nb2;
        else if (*av[2] == '/')
        {
            if(nb2 == 0)
                 write(1, "eroor\n", 6);
            else
                res = nb1 / nb2;
        }
        else 
            res = nb1 % nb2;

        if (res >= -2147483648 && res <= 2147483647) 
        printf("%d", (int)res);
    
    
    } 
    write(1, "\n", 1);
    return (0);
}