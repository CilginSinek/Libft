/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iduman <iduman@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 19:45:01 by iduman            #+#    #+#             */
/*   Updated: 2025/06/02 19:45:01 by iduman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	set_amblem(int n)
{
	if (n > 0)
		return ('+');
	else
		return ('-');
}

int	counter(int n)
{
	int		c;
	char	a;

	a = set_amblem(n);
	c = 0;
	while (n)
	{
		n /= 10;
		c++;
	}
	if (a == '-')
		return (c + 1);
	return (c);
}

/*
The ft_itoa function converts an integer n into a string representation.
It handles both positive and negative integers,
returning a dynamically allocated string.
If n is zero, it returns a string "0".
Input:
	int n: The integer to convert to a string.
Output:
	char*: A pointer to the newly allocated string representing the integer.
			The caller is responsible for freeing the allocated memory.
			If the allocation fails, NULL is returned.
*/
char	*ft_itoa(int n)
{
	char	*str;
	char	a;
	int		len;
	char	tmp;

	if (n == 0)
		return (ft_strdup("0"));
	a = set_amblem(n);
	len = counter(n);
	str = (char *)malloc(len + 1);
	if (!str)
		return ((char *) NULL);
	str[len + 1] = '\0';
	while (n)
	{
		tmp = n % 10 + '0';
		str[len] = tmp;
		n = n / 10;
		len--;
	}
	if (a == '-')
		str[0] = '-';
	return (str);
}
