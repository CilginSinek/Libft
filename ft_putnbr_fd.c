/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iduman <iduman@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 19:45:16 by iduman            #+#    #+#             */
/*   Updated: 2025/06/02 19:45:16 by iduman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Outputs the integer ’n’ to the specified file descriptor.
Input:
    int n: The integer to output.
    int fd: The file descriptor to which the integer will be written.
Output:
    None. The function writes the integer to the specified file descriptor.
*/
void ft_putnbr_fd(int n, int fd)
{
	char *str;

	if (fd < 0)
		return ;
	if (n == 0)
		ft_putchar_fd('0', fd);
	else
	{
		str = ft_itoa(n);
		if (!str)
			return ;
		ft_putstr_fd(str, fd);
		free(str);
	}
}
