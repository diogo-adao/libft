/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diolivei <diolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 19:00:54 by diolivei          #+#    #+#             */
/*   Updated: 2024/04/15 19:29:11 by diolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (str1[i] < str2[i] || str1[i] > str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

/*int main() {
	char str1[] = "Hello";
	char str2[] = "Hello";
	int res;

	res = ft_strncmp(str1, str2, 5);
	printf("%d\n", res);
	return (0);
}*/
