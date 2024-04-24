#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    char *s;

    s = ft_itoa(n);
    ft_putstr_fd(s, fd);
}

/* int main()
{
    ft_putnbr_fd(-2147483648, 1);
    return (0);
} */