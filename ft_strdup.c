/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iduman <iduman@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 15:37:40 by iduman            #+#    #+#             */
/*   Updated: 2025/06/01 17:10:02 by iduman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
The ft_strdup function allocates memory for a new string
and copies the content of the string pointed to
by str into the newly allocated memory.
If the allocation fails, it returns NULL.
Input:
	const char *str: Pointer to the string to be duplicated.
Output:
	char*: Pointer to the newly allocated string containing a copy of str,
	or NULL if the allocation fails.
*/
char	*ft_strdup(const char *str)
{
	char	*nstr;
	size_t	len;

	len = ft_strlen(str);
	nstr = (char *)malloc(len);
	if (!nstr)
		return ((char *) NULL);
	ft_memcpy(nstr, str, len);
	return (nstr);
}
