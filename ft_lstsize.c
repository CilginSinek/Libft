/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iduman <iduman@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 17:09:57 by iduman            #+#    #+#             */
/*   Updated: 2025/06/12 16:12:00 by iduman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*mylst;

	i = 0;
	mylst = lst;
	while (1)
	{
		if(mylst->next == NULL)
			return (i + 1);
		i++;
		mylst = mylst->next;
	}
}
