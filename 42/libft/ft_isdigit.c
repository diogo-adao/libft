/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diolivei <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 19:43:43 by diolivei          #+#    #+#             */
/*   Updated: 2024/04/10 19:43:43 by diolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isdigit(int c)
{
    return (c >= '0' && c <= '9');
}

/*int main(int argc, char *argv[])
{
    for (int i = 1; i < argc; i++)
    {
        for (int j = 0; argv[i][j] != '\0'; j++)
        {
            if (ft_isdigit(argv[i][j]))
            {
                printf("  Character %d is a number.\n", j);
            }
            else
            {
                printf("  Character %d is not a number.\n", j);
            }
        }
    }

    return (0);
}*/