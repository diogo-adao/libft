/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diolivei <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 20:07:49 by diolivei          #+#    #+#             */
/*   Updated: 2024/04/10 20:07:49 by diolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *str)
{
    size_t i = 0;

    while (str[i])
        i++;
    return (i);
}

/*int main(int argc, char *argv[])
{
    int i = 1;

    if (argc < 2)
    {
        printf("Provide arguments.");
        return 0;
    }

    while (i < argc)
    {
        // printf("%d\n", strlen(argv[i]));
        printf("%d\n", ft_strlen(argv[i]));
        i++;
    }
    return (0);
}*/