/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iduman <iduman@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 14:52:10 by iduman            #+#    #+#             */
/*   Updated: 2025/06/01 15:02:40 by iduman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
The ft_strnstr function locates the first occurrence of the substring little
in the string big, up to a maximum of len characters.
If little is an empty string, big is returned.
If little is not found in big, NULL is returned.
Input:
	const char *big: Pointer to the main string where the search is performed
	const char *little: Pointer to the substring to be found
	size_t len: The maximum number of characters to search in big
Output:
	const char*: Pointer to the first occurrence of little in big
	or NULL if little is not found within the first len characters of big
*/
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	if (len == 0)
		return (NULL);
	while (*big && len > 0)
	{
		i = 0;
		j = 0;
		while (big[i] && little[j] && (i + j < len) && big[i + j] == little[j])
		{
			j++;
			if (little[j] == '\0')
				return ((char *)(big + i));
		}
		i++;
		len--;
	}
	return (NULL);
}
