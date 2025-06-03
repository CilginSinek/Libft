/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iduman <iduman@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 17:11:44 by iduman            #+#    #+#             */
/*   Updated: 2025/06/03 19:05:37 by iduman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
The ft_substr function extracts a substring from the given string s,
starting at the specified index start and
extending for a maximum of len characters.
If start is greater than the length of s, an empty string is returned.
If len is greater than the remaining length of s from start,
the substring will be truncated to fit within the bounds of s.
Input:
	char const *s: Pointer to the original string.
	unsigned int start: The starting index for the substring.
	size_t len: The maximum length of the substring to extract.
Output:
	char*: Pointer to the newly allocated substring,
	or NULL if the allocation fails or if s is NULL.
	If start is greater than the length of s, an empty string is returned.
	If the allocation fails, NULL is returned.
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (start == 0)
	{
		str = (char *)malloc(len);
		if (!str)
			return ((char *) NULL);
		ft_memcpy(str, s, len + 1);
		return (str);
	}
	str = (char *)malloc(len - start + 1);
	if (!str)
		return ((char *) NULL);
	ft_memcpy(str, s + start, len - start);
	str[len - start + 1] = '\0';
	return (str);
}
