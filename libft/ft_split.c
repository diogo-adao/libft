/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diolivei <diolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:58:44 by diolivei          #+#    #+#             */
/*   Updated: 2024/04/22 14:06:22 by diolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_counter(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
		}
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char		**str;
	char		**arr;
	char const	*tmp;

	tmp = s;
	arr = (char **)malloc(sizeof(char *) * (ft_counter(s, c) + 1));
	if (!arr)
		return (0);
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
	return (arr);
}

/*int main()
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
}*/
