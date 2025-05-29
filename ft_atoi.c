/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iduman <iduman@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 14:50:31 by iduman            #+#    #+#             */
/*   Updated: 2025/05/29 15:13:07 by iduman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
In C, atoi stands for ASCII To Integer.
The ft_atoi() is a library function in C that converts
the numbers in string form to their integer value.
To put it simply, the atoi() function accepts a string
(which represents an integer) as a parameter
and yields an integer value in return.
Input: *char
Output: int
*/
int	ft_atoi(char *c)
{
	int	l;
	int	a;
	int	t;
	int	i;
	int	n;

	t = 0;
	l = ft_strlen(c);
	if ((c[0] == '+') || (c[0] == '-'))
	{
		if (c[0] == '-')
			a = -1;
		t = 1;
	}
	while (t < l)
	{
		if (c[t] >= '0' && c[t] <= '9')
		{
			i = c[t] - 48;
			n = n * 10 + i;
		}
		else
			return (n * a);
	}
	return (n * a);
}
