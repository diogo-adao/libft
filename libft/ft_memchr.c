/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diolivei <diolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 19:31:16 by diolivei          #+#    #+#             */
/*   Updated: 2024/04/16 19:51:06 by diolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;
	char	*string;

	i = 0;
	string = (char *)str;
	while (i < n)
	{
		if (string[i] == c)
			return ((char *)str);
		i++;
		str++;
	}
	return (0);
}

/*int main() {
	const char str[] = "Hello, I'm at 42!";
	char c = 'I';
	char *res;

	res = ft_memchr(str, c, 8);
	printf("String after |%c| is - |%s|\n", c, res);
	return (0);
}*/
