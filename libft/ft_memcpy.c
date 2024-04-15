/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diolivei <diolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 18:45:10 by diolivei          #+#    #+#             */
/*   Updated: 2024/04/15 14:54:25 by diolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*source;
	char	*destino;

	i = 0;
	source = (char *)src;
	destino = (char *)dest;
	while (i < n)
	{
		destino[i] = source[i];
		i++;
	}
	return (dest);
}

/*int main()
{
    char str[] = "I'm at 42 School";
    char dest[] = "I'm testing this function";
    printf("Before memcpy: %s\n", dest);
    ft_memcpy(dest, str, 16);
    printf("After memcpy: %s\n", dest);
    return (0);
}*/
