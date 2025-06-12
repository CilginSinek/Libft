/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iduman <iduman@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 13:36:20 by iduman            #+#    #+#             */
/*   Updated: 2025/06/12 16:17:49 by iduman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list		*mylist;
	t_list		tmp;

	mylist = *lst;
	while (1)
	{
		del(mylist->content);
		tmp = *mylist;
		free(mylist);
		if (tmp.next == NULL)
			return ;
		mylist = tmp.next;
	}
}
