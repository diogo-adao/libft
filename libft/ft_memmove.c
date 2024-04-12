/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 17:09:00 by marvin            #+#    #+#             */
/*   Updated: 2024/04/12 17:12:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    char *destino;
    char *source;
    destino = (char *)dest;
    source = (char *)src;

    if (!dest && !src)
        return (dest);

    if (dest <= src)
    {
        ft_memcpy(destino, source, n);
    }
    else if (dest > src)
    {
        destino += n - 1;
        source += n - 1;
        while (n--)
        {
            *destino-- = *source--;
        }
    }
    return (dest);
}

/*int main()
{
    char str[] = "I'm at 42 School";
    char dest[] = "I'm testing this function";

    printf("Before memmove: %s\n", dest);
    ft_memmove(dest, str, 12);
    printf("After memmove: %s\n", dest);
    return (0);
}*/