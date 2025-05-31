/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iduman <iduman@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 17:26:07 by iduman            #+#    #+#             */
/*   Updated: 2025/05/29 13:46:08 by iduman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
The memcpy function in C copies the specified 
number of bytes from one memory location to another 
memory location regardless of the type of data stored.
Where both source and destination are raw memory addresses.
The memcpy() function is optimized for copying memory chunks in 
an efficient manner and it copies memory in a byte-by-byte format.
Input:
    void *dest: A pointer to the memory location
    where the copied data will be stored.
    void *src: A pointer to the memory location
    from where the data is to be copied.
    unsigned int n: The number of bytes to be copied.
Output:
    void* : This function returns a pointer to the memory location
    where data is copied.
*/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (n-- && *s)
		*d++ = *s++;
	return (dest);
}
