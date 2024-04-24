/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diolivei <diolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:07:43 by diolivei          #+#    #+#             */
/*   Updated: 2024/04/22 18:01:45 by diolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbrlen(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		count = 1;
	while (n)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static int is_negative(int n)
{
    int        sign;

    sign = 0;
    if (n < 0)
	{
		if (n == -2147483648)
		{
			ft_putstr_fd("-2147483648", 1);
			return (0);
		}
		sign = 1;
	}
    return (sign);
}

char    *ft_itoa(int n)
{
    char    *str;
    int      i;
    int sign;

    sign = is_negative(n);
	if (n == -2147483648)
		return (0);
    i = ft_nbrlen(n) + sign;
    str = (char *)malloc(sizeof(char) * (i + 1));
    if (!str)
        return (0);
    if (sign)
    {
    	n = n * -1;
		str[0] = '-';
    }
	str[i] = '\0';
    if (n == 0)
        str[0] = '0';
    while (n && i--)
    {
        str[i] = n % 10 + '0';
        n = n / 10;
    }
    return (str);
}

/* int main()
{
	int n = -2147483647;
	char *str = ft_itoa(n);

	printf("%s\n", str);
	return (0);
} */
