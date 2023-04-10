#include <unistd.h>


void    ft_print_revers_alphabet(void)
{
    char c,d;

    c = 'a';
    while (c <= 'z')
    {
        write (1, &c, 1);
        c++;
    }

    d = 'A';
    while (d <= 'Z')
    {
        write (1, &d, 1);
        d++;
    }
}

int main(void)
{
    ft_print_revers_alphabet();
    return (0);
}
