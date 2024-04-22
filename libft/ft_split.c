<<<<<<< HEAD
#include "libft.h"

static int ft_counter(char const *s, char c)
{
    int i;
    int count;

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

char **ft_split(char const *s, char c)
{
    char **str;
    char **arr;
    char const *tmp;

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
=======
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diolivei <diolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:33:18 by diolivei          #+#    #+#             */
/*   Updated: 2024/04/18 15:42:38 by diolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countword(char const *s, char c)
{
	size_t	count;

	if (!*s)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**lst;
	size_t	word_len;
	int		i;

	lst = (char **)malloc((ft_countword(s, c) + 1) * sizeof(char *));
	if (!s || !lst)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				word_len = ft_strlen(s);
			else
				word_len = ft_strchr(s, c) - s;
			lst[i++] = ft_substr(s, 0, word_len);
			s += word_len;
		}
	}
	lst[i] = NULL;
	return (lst);
}

/*int main(void)
{
    char const *str = "This is a string with multiple words";
    char c = ' ';
    char **words;

    words = ft_split(str, c);

    if (words)
    {
        int i = 0;
        while (words[i])
        {
            printf("Word %d: %s\n", i + 1, words[i]);
            free(words[i]);  // Free the allocated memory for each word
            i++;
        }
        free(words);  // Free the memory allocated for the array of pointers
    }
    else
    {
        printf("Error: Memory allocation failed\n");
    }

    return (0);
}*/
>>>>>>> cd45ba774bd40ef1fc15bd3046a7d33d87e93589
