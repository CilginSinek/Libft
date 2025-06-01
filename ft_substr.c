/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iduman <iduman@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 17:11:44 by iduman            #+#    #+#             */
/*   Updated: 2025/06/01 17:32:51 by iduman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (start == 0)
	{
		str = (char *)malloc(len);
		if (!str)
			return ((char *) NULL);
		ft_memcpy(str, s, len);
		return (str);
	}
	str = (char *)malloc(len - start + 1);
	if (!str)
		return ((char *) NULL);
	ft_memcpy(str, s + start, len - start);
	str[len - start + 1] = '\0';
	return (str);
}
