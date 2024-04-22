/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diolivei <diolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 16:56:52 by diolivei          #+#    #+#             */
/*   Updated: 2024/04/17 17:47:42 by diolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	int		i;
	int		j;

	i = 0;
	j = 0;
<<<<<<< HEAD
	p = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!p)
		return (NULL);
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		p[i] = s2[j];
		i++;
		j++;
=======
	p = (char *)malloc(ft_strlen(s1) + ft_strlen(s2));
	if (p != NULL)
	{
		while (s1[i])
		{
			p[i] = s1[i];
			i++;
		}
		while (s2[j])
		{
			p[i] = s2[j];
			i++;
			j++;
		}
>>>>>>> cd45ba774bd40ef1fc15bd3046a7d33d87e93589
	}
	return (p);
}

/*int main()
{
	char str1[] = "Hello I'm at ";
	char str2[] = "42 school";

	char *cat = ft_strjoin(str1, str2);
	printf("%s\n", cat);
	return (0);
}*/
