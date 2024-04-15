/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diolivei <diolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:58:47 by diolivei          #+#    #+#             */
/*   Updated: 2024/04/15 18:11:12 by diolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == c)
		{
			return ((char *)str);
		}
		str++;
	}
	return (0);
}

/*int main() {
	const char str[] = "Hello, I'm at 42!";
	char c = 'I';
	char *res;

	res = ft_strchr(str, c);
	printf("String after |%c| is - |%s|\n", c, res);
	return (0);
}*/
