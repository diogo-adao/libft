/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 18:45:21 by marvin            #+#    #+#             */
/*   Updated: 2024/04/12 18:45:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t i;
    size_t j;
    size_t src_len;
    size_t dest_len;

    src_len = ft_strlen(src);
    dest_len = ft_strlen(dest);
    j = dest_len;
    i = 0;

    if (size <= dest_len)
        return size + src_len;

    while (j < size - 1 && src[i])
    {
        dest[j] = src[i];
        ++i;
        ++j;
    }
    dest[j] = '\0';
    return dest_len + src_len;
}

/*int main()
{
    char src[] = "I'm gonna be copied";
    char dest[] = "Ola eu sou ";

    printf("%d\n", ft_strlcat(dest, src, 20));
    printf("%s\n", dest);
    return (0);
}*/