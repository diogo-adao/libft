/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diolivei <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 19:43:43 by diolivei          #+#    #+#             */
/*   Updated: 2024/04/10 19:43:43 by diolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalpha(int c)
{
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

/*int main(int argc, char *argv[])
{
    for (int i = 1; i < argc; i++)
    {
        for (int j = 0; argv[i][j] != '\0'; j++)
        {
            if (ft_isalpha(argv[i][j]))
            {
                printf("  Character %d is alphabetic.\n", j);
            }
            else
            {
                printf("  Character %d is not alphabetic.\n", j);
            }
        }
    }

    return (0);
}*/