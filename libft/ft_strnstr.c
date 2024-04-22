/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diolivei <diolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:52:52 by diolivei          #+#    #+#             */
/*   Updated: 2024/04/16 19:59:16 by diolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	int		i;
	int		j;
	size_t	needle_len;

	i = 0;
	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *)haystack);
	while (i <= (int)(n - needle_len))
	{
		j = ft_strncmp(haystack, needle, needle_len);
		if ((haystack[0] == needle[0]) && (j == 0))
			return ((char *)haystack);
		haystack++;
		i++;
	}
	return (0);
}

/*int main() {
    char string[] = "Hello 42 school!";
    char substring[] = "42";
    char *ptr;

    ptr = ft_strnstr(string, substring, 16);
    if (ptr != NULL) {
        printf("%s\n", ptr);
    } else {
        printf("NULL\n");
    }
    return 0;
}*/
