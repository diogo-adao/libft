/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diolivei <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 20:36:39 by diolivei          #+#    #+#             */
/*   Updated: 2024/04/10 20:36:39 by diolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *str, int c, size_t n)
{

    size_t i = 0;
    char *string = (char *)str;

    while (i < n)
    {
        string[i] = c;
        i++;
    }
    return (str);
}

/*int main()
{
    char str[] = "42 School ";
    char c = '$';

    printf("%s", ft_memset(str, c, 2));
    return (0);
}*/