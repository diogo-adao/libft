/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diolivei <diolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:56:06 by diolivei          #+#    #+#             */
/*   Updated: 2024/04/17 17:03:17 by diolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*p;

	i = 0;
	p = (char *)malloc(len);
	if (p != NULL)
	{
		while (i < len)
		{
			p[i] = s[start];
			start++;
			i++;
		}
	}
	return (p);
}

/*int main() {
	char str[17] = "I'm at 42 school";
	char *substr = ft_substr(str, 7, 9);

	printf("%s\n", substr);
	return (0);
}*/
