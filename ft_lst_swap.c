/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_swap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 15:39:38 by rhallste          #+#    #+#             */
/*   Updated: 2017/09/28 17:00:19 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lst_swap(t_list **lst_start, int first_index, int second_index)
{
	t_list	*start;
	t_list	*tmp_first;
	t_list	*tmp_second;
	t_list	*tmp_next;
	int		i;

	start = *lst_start;
	i = -1;
	while (start && ++i < second_index)
		start = start->next;
	if (!start)
		return (NULL);
	tmp_second = start;
	i = -1;
	while (++i < first_index - 1)
		start = start->next;
	tmp_first = (i == 0) ? start : start->next;
	tmp_next = tmp_second->next;
	if (i == 0)
	{
		*lst_start = tmp_second;
		(*lst_start)->next = tmp_first->next;
	}
	else
	{
		start->next = tmp_second;
		start->next->next = tmp_first->next;
	}
	while (++i < second_index - 1)
		start = start->next;
	start->next = tmp_first;
	start->next->next = tmp_next;
	return (*lst_start);
}
