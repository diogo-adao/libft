/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diolivei <diolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:58:44 by diolivei          #+#    #+#             */
/*   Updated: 2024/04/26 19:49:39 by diolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_counter(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static void	ft_alloc(char **arr, char const *s, char c)
{
	char		**str;
	char const	*tmp;

	tmp = s;
	str = arr;
	while (*tmp)
	{
		while (*s == c)
			s++;
		tmp = s;
		while (*tmp != c && *tmp)
			tmp++;
		if (*tmp == c || tmp > s)
		{
			*str = ft_substr(s, 0, tmp - s);
			str++;
			s = tmp;
		}
	}
	*str = 0;
}

char	**ft_split(char const *s, char c)
{
	char	**arr;

	if (!s)
		return (0);
	arr = (char **)malloc(sizeof(char *) * (ft_counter(s, c) + 1));
	if (!arr)
		return (0);
	ft_alloc(arr, s, c);
	return (arr);
}

/* int main()
{
    char str[] = "Hello I'm at 42 School";
    char **arr = ft_split(str, ' ');
    int i = 0;

    while (arr[i])
    {
        printf("%s\n", arr[i]);
        i++;
    }
    return (0);
} */
