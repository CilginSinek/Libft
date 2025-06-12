/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iduman <iduman@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 14:52:16 by iduman            #+#    #+#             */
/*   Updated: 2025/06/01 15:05:16 by iduman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
The ft_strrchr function locates the last
occurrence of a character c in the string s.
If c is found, a pointer to the last occurrence is returned.
If c is not found, NULL is returned.
Input:
	const char *s: Pointer to the string to be searched.
	int c: The character to search for (passed as an int, but treated as a char).
Output:
	const char*: Pointer to the last occurrence of c in s, or
	NULL if not found.
*/
char	*ft_strrchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	s += ft_strlen(s);
	while (1)
	{
		if ((unsigned char)*s == (unsigned char)c)
			return ((char *)s);
		if (*s == '\0')
			return (NULL);
		s--;
	}
}
