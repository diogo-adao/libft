/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diolivei <diolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:35:07 by diolivei          #+#    #+#             */
/*   Updated: 2024/04/17 15:53:27 by diolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		i;
	char	*ptr;

	i = 0;
<<<<<<< HEAD
	ptr = (char *)malloc(ft_strlen(str) + 1);
	if (!ptr)
		return (NULL);
	while (str[i])
	{
		ptr[i] = str[i];
		i++;
=======
	ptr = (char *)malloc(ft_strlen(str));
	if (ptr != NULL)
	{
		while (str[i])
		{
			ptr[i] = str[i];
			i++;
		}
>>>>>>> cd45ba774bd40ef1fc15bd3046a7d33d87e93589
	}
	return (ptr);
}

/*int main() {
	char str[] = "42 school";

	char *target = ft_strdup(str);
	printf("%s\n", target);
	return (0);
}*/
