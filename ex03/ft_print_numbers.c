#include <unistd.h>

void    ft_print_nummber(void)
{
    int i;
    
    i = 48;
    while (i < 58)
    {
        write (1, &i, 1);
        i++;
    }
}

int main(void)
{
    ft_print_nummber();
    return (0);
}
