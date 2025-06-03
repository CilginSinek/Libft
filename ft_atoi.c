/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iduman <iduman@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 14:50:31 by iduman            #+#    #+#             */
/*   Updated: 2025/06/03 18:48:09 by iduman           ###   ########.fr       */
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
int	ft_atoi(const char *str)
{
	int	l;
	int	a;
	int	t;
	int	i;
	int	n;

	t = 0;
	l = ft_strlen(str);
	if ((str[0] == '+') || (str[0] == '-'))// burası düzeltilicek 7-13 arasındakiler atlanıyor
	{
		if (str[0] == '-')
			a = -1;
		t = 1;
	}
	while (t < l)
	{
		if (str[t] >= '0' && str[t] <= '9')
		{
			i = str[t] - 48;
			n = n * 10 + i;
		}
		else
			return (n * a);
	}
	return (n * a);
}
