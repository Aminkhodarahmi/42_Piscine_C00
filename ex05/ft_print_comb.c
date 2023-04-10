#include <unistd.h>

void    ft_putchar(char c)
{
    write (1, &c, 1);
}

void    ft_print_comb(void)
{
    int i;
    int j;
    int k;

    i = j = k = 48;
    while (i < 56)
    {
        j = i + 1;
        while (j < 57)
        {
            k = j + 1;
            while (k < 58)
            {
                if (i != j && i != k && j != k)
                {
                    ft_putchar(i);
                    ft_putchar(j);
                    ft_putchar(k);
                    ft_putchar(' ');
                    ft_putchar(',');
                }
                k++;
            }
            j++;
        }
        i++;
    }
}

int main(void)
{
    ft_print_comb();
    return (0);
}
