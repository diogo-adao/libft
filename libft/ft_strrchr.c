/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diolivei <diolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:12:29 by diolivei          #+#    #+#             */
/*   Updated: 2024/04/15 18:58:11 by diolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	str += i;
	while (i--)
	{
		if (*str == c)
			return ((char *)str);
		*str--;
	}
	return (0);
}

/*int main() {
	const char str[] = "Hello, I'm at 42 school!";
	char c = 'h';
	char *res;

	res = ft_strrchr(str, c);
	printf("String after last |%c| is - |%s|\n", c, res);
	return (0);
}*/
