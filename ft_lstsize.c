/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iduman <iduman@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 17:09:57 by iduman            #+#    #+#             */
/*   Updated: 2025/06/03 18:28:33 by iduman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	list_looper(t_list *lst, int n)
{
	int		i;
	t_list	new_list;

	new_list = *lst;
	i = n;
	if (new_list.next == NULL)
		return (list_looper(new_list.next, i));
	return (n);
}

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	return (list_looper(lst, i));
}
