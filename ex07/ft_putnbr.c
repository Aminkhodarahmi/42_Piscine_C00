#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int n)
{
    int i;
    char    c[10];
    
    if (n == 0)
    {
        ft_putchar('0');
    }
    
    if (n < 0)
    {
        ft_putchar('-');
        n = -n;
    }
    
    i = 0;
    while (n > 0)
    {
        c[i] = n % 10 + '0';
        n = n / 10;
        i++;
    }
    i--;
    while (i >= 0)
    {
        ft_putchar(c[i]);
        i--;
    }
}



int main(void)
{
    ft_putnbr(98765);
    return (0);
}
