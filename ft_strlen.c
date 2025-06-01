/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iduman <iduman@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 16:17:41 by iduman            #+#    #+#             */
/*   Updated: 2025/06/01 17:57:23 by iduman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
This function count your string length

Input:
	const char *str
Output:
	unsigned int
*/
size_t	ft_strlen(const char *s)
{
	size_t	c;

	c = 0;
	while (*s++)
		c++;
	return (c);
}
