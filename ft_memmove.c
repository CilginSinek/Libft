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

void	ft_memmove_helper(char *d, char *s, unsigned int n)
{
	char	*lasts;
	char	*lastd;

	lastd = d + (n - 1);
	lasts = s + (n - 1);
	while (n--)
		*lastd-- = *lasts--;
}

void	*ft_memmove(void *dest, const void *src, unsigned int n)
{
	char		*d;
	char		*s;

	d = (char *)dest;
	s = (char *)src;
	if (d < s)
	{
		while (n--)
			*d++ = *s++;
	}
	else
		ft_memmove_helper(d, s, n);
	return (dest);
}
