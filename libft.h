/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iduman <iduman@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 15:32:25 by iduman            #+#    #+#             */
/*   Updated: 2025/05/29 17:22:10 by iduman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H


int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
unsigned int	ft_strlen(const char *s);
void	*ft_memset(void *s, int c, unsigned int n);
void	ft_bzero(void *s, unsigned int n);

typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;

#endif
