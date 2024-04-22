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

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		sign;

	sign = 0;
	if (n < 0)
	{
		sign = 1;
		n = n * -1;
	}
	i = ft_nbrlen(n) + sign;
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (0);
	if (sign)
		str[0] = '-';
	if (n == 0)
		str[0] = '0';
	while (n && i--)
	{
		str[i] = n % 10 + '0';
		n = n / 10;
	}
	return (str);
}

/*int main()
{
	int n = 0;
	char *str = ft_itoa(n);

	printf("%s\n", str);
	return (0);
}*/
