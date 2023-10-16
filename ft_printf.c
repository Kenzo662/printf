#include "printf.h"
int    ft_int(const char *s, va_list args)
{
    int i;
    int nb;
    int count;

    i = 0;
    nb = 0;
    count = 0;
    while (s[i] != '\0')
    {
        nb = 0;
        if (s[i] == '%' && s[i + 1] == 'd')
        {
            i += 2;
            nb += (int) va_arg (args, int);
            count = ft_integer(nb);
        }
        write(1, &s[i], 1);
        i++;
        count++;
    }
    return (count);
}

int ft_printf(const char *s, ...)
{
    va_list args;
    va_start (args, s);
    return (ft_int (s, args));

}


int main (void)
{
    ft_printf("Le resultat est : %d\n%d\n", 25, 52);
    printf("Le resultat est : %d\n%d\n", 25, 52);
}