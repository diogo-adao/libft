/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diolivei <diolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:17:58 by diolivei          #+#    #+#             */
/*   Updated: 2024/04/11 14:18:13 by diolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    int res = 0;
    int sign = 1;
    int i = 0;

    while (str[i] == ' ')
    {
        i++;
    }

    if (str[i] == '-' || str[i] == '+')
    {
        sign = (str[i] == '-') ? -1 : 1;
        i++;
    }

    while (str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + str[i] - '0';
        i++;
    }
    return sign * res;
}

/*int main(int argc, char *argv[])
{
    int i = 0;

    if (argc < 2)
    {
        printf("Provide arguments.");
        return 0;
    }

    while (i < argc)
    {
        // printf("%d\n", atoi(argv[i]));
        printf("%d\n", ft_atoi(argv[i]));
        i++;
    }
    return (0);
}*/