/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diolivei <diolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:58:47 by diolivei          #+#    #+#             */
/*   Updated: 2024/04/29 15:13:50 by diolivei         ###   ########.fr       */
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

/* int main()
{
	printf(ft_strchr("teste", '\0'));
	printf(strchr("teste", '\0'));
	return (0);
} */
