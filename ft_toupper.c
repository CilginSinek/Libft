/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iduman <iduman@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 14:37:35 by iduman            #+#    #+#             */
/*   Updated: 2025/05/29 14:45:10 by iduman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
The ft_toupper() function returns the ASCII value of
an uppercase version of the character.
If the character is not an uppercase character
then its value is returned without being changed.

Input: int
Output: int
*/
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 20);
	return (c);
}
