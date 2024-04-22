/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diolivei <diolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:10:28 by diolivei          #+#    #+#             */
/*   Updated: 2024/04/17 15:32:53 by diolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*p;

	p = malloc(nitems * size);
<<<<<<< HEAD
	if (!p)
        return (NULL);
	ft_memset(p, 0, nitems * size);
=======
	if (p != NULL)
	{
		ft_memset(p, 0, nitems * size);
	}
>>>>>>> cd45ba774bd40ef1fc15bd3046a7d33d87e93589
	return (p);
}

/*int main()
{
    int* ptr;
    int n, i;

    n = 5;
    ptr = (int*)ft_calloc(n, sizeof(int));

    if (ptr == NULL) {
        printf("Memory not allocated.\n");
    }
    else {
        printf("Memory successfully allocated using calloc.\n");
    }
    return 0;
}*/
