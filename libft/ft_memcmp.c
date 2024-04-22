/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diolivei <diolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:02:24 by diolivei          #+#    #+#             */
/*   Updated: 2024/04/16 19:51:28 by diolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	i;
	char	*string1;
	char	*string2;

	i = 0;
	string1 = (char *)str1;
	string2 = (char *)str2;
	while (i < n)
	{
		if (string1[i] < string2[i] || string1[i] > string2[i])
			return (string1[i] - string2[i]);
		i++;
	}
	return (0);
}

/*int main() {
	char str1[] = "Hello";
	char str2[] = "Hello";
	int res;

	res = ft_memcmp(str1, str2, 7);
	printf("%d\n", res);
	return (0);
}*/
