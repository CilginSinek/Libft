/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iduman <iduman@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 18:22:17 by iduman            #+#    #+#             */
/*   Updated: 2025/05/29 13:49:12 by iduman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memmove_helper(char *d, char *s, size_t n)
{
	char	*lasts;
	char	*lastd;

	lastd = d + (n - 1);
	lasts = s + (n - 1);
	while (n-- && *lasts)
		*lastd-- = *lasts--;
}

/*
ft_memmove is a function that copies n bytes from the memory area
pointed to by src to the memory area pointed to by dest,
handling overlapping memory regions safely.
It uses a helper function, ft_memmove_helper,
for cases where the destination pointer is greater than the source pointer.
Input:
	void *dest: A pointer to the destination memory area.
	const void *src: A pointer to the source memory area.
	size_t n: The number of bytes to copy.
Output:
	void *: Returns a pointer to the destination memory area (dest).
*/
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	char		*s;

	d = (char *)dest;
	s = (char *)src;
	if (d < s)
	{
		while (n-- && *s)
			*d++ = *s++;
	}
	else
		ft_memmove_helper(d, s, n);
	return (dest);
}
