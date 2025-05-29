/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iduman <iduman@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 16:17:41 by iduman            #+#    #+#             */
/*   Updated: 2025/05/29 17:21:55 by iduman           ###   ########.fr       */
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
unsigned int	ft_strlen(const char *s)
{
	unsigned int	c;

	c = 0;
	while (*s++)
		c++;
	return (c);
}
