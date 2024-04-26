/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diolivei <diolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:58:47 by diolivei          #+#    #+#             */
/*   Updated: 2024/04/26 19:54:27 by diolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*ptr;

	ptr = (char *)str;
	while (*ptr)
	{
		if (*ptr == (unsigned char)c)
		{
			return (ptr);
		}
		ptr++;
	}
	if (c == '\0')
		return (ptr);
	return (0);
}

/* int main() {
	const char str[] = "teste";
	char c = '\0';
	char *res;

	res = ft_strchr(str, c);
	printf("String after |%c| is - |%s|\n", c, res);
	return (0);
} */
