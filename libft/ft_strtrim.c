/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diolivei <diolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 17:49:33 by diolivei          #+#    #+#             */
/*   Updated: 2024/04/17 20:13:26 by diolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char *str;
	int start;
	int end;

	start = 0;
	end = ft_strlen(s1) - 1;
	if (!s1)
		return (0);
	if (!set)
		return (ft_strdup(s1));
	while (ft_strchr(set, s1[start]) && start <= end)
		start++;
	if (start > end)
		return ("");
	while (ft_strchr(set, s1[end]) && end >= start)
		end--;
	str = (char *)malloc(sizeof(char) * (end - start + 2));
	if (!str)
		return (0);	
	ft_memcpy(str, &s1[start], end - start + 1);
	return (str);
}

/*int main()
{
	char str[] = "Hello 42 school";
	char set[] = "Hool";

	char *target = ft_strtrim(str, set);
	printf("%s\n", target);
	return (0);
}*/