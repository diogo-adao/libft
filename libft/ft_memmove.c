/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diolivei <diolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 19:20:16 by diolivei          #+#    #+#             */
/*   Updated: 2024/04/11 20:01:30 by diolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;
    char *destino;
    char *source;
    destino = (char *)dest;
    source = (char *)src;
    i = 0;

    if (dest <= src)
    {
        while (i < n)
        {
            destino[i] = source[i];
            i++;
        }
    }
    else if (dest > src)
    {
        i = n - 1;
        while (i > 0)
        {
            destino[i] = source[i];
            i--;
        }
    }
    return (dest);
}

/*int main()
{
    char str[] = "I'm at 42 School";
    char dest[] = "I'm testing";
    printf("Before memmove: %s\n", dest);
    ft_memmove(dest, str, 12);
    printf("After memmove: %s\n", dest);
    return (0);
}*/

// https://marmota.medium.com/c-language-making-memmove-def8792bb8d5