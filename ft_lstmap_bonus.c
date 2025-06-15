/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iduman <iduman@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 15:34:07 by iduman            #+#    #+#             */
/*   Updated: 2025/06/13 16:24:09 by iduman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*tmp_lst;
	t_list	*hold_lst;

	if (!lst || !f || !del)
		return (NULL);
	hold_lst = lst;
	new_lst = NULL;
	while (hold_lst)
	{
		tmp_lst = (t_list *)malloc(sizeof(t_list));
		if (!tmp_lst)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		tmp_lst->content = f(hold_lst->content);
		if (!tmp_lst->content)
			ft_lstdelone(tmp_lst, del);
		hold_lst = hold_lst->next;
	}
	return (new_lst);
}
