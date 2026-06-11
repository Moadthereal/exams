void    ft_swap(char *s1, char *s2)
{
    char tmp;
    tmp = *s1;
    *s1 = *s2;
    *s2 = tmp;
}
int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}
char    *ft_strrev(char *str)
{
   int  len ;
   int  i;
   
   i = 0;
   len = ft_strlen(str) - 1;
   while(i < len)
   {
        ft_swap(&str[i], &str[len]);
        len--;
        i++;
   }
   return (str);
}
#include <stdio.h>
int main(void)
{
    char str[] = "hello world";
    
    printf("%s", ft_strrev(str));

}