/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_swap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 15:39:38 by rhallste          #+#    #+#             */
/*   Updated: 2017/09/28 19:28:32 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lst_swap(t_list **lst_start, int fi, int si)
{
	t_list	*start;
	t_list	*tmp_first;
	t_list	*tmp_second;
	t_list	*tmp_next;
	int		i;

	start = *lst_start;
	i = 0;
	while (start && i < si)
	{
		start = start->next;
		i++;
	}
	if (!start)
		return (NULL);
	tmp_second = start;
	tmp_next = tmp_second->next;
	i = 0;
	if (fi == 0)
	{
		tmp_first = *lst_start;
		*lst_start = tmp_second;
		(*lst_start)->next = tmp_first->next;
		start = *lst_start;
	}
	else
	{
		start = *lst_start;
		while (i < fi - 1)
		{
			start = start->next;
			i++;
		}
		tmp_first = start->next;
		start->next = tmp_second;
		start->next->next = tmp_first->next;
	}
	i = fi;
	while (i < si)
	{
		start = start->next;
		i++;
	}
	start->next = tmp_first;
	start->next->next = tmp_next;
	return (*lst_start);
}
