/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iduman <iduman@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 14:51:33 by iduman            #+#    #+#             */
/*   Updated: 2025/06/01 17:50:16 by iduman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Searches for the first occurrence of the byte `c` in
the first `n` bytes of the memory area pointed to by `s`.
If the byte is found, it returns a pointer to the byte.
If the byte is not found, it returns NULL.
Input:
	const void *s - pointer to the memory area to search
	int c - byte to search for
	size_t n - number of bytes to search
Output:
	void* - pointer to the first occurrence of `c` in `s`, or
	NULL if not found
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	ch;

	ptr = (unsigned char *)s;
	ch = (unsigned char)c;
	while (n-- && *ptr)
	{
		if (*ptr == ch)
			return ((void *)ptr);
		ptr++;
	}
	return (NULL);
}
