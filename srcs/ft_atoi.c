/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 19:36:59 by rhallste          #+#    #+#             */
/*   Updated: 2017/09/19 11:51:28 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	to_number(const char *str)
{
	int nb;

	nb = 0;
	while (ft_isdigit(*str))
	{
		nb = (nb * 10) + (*str - '0');
		str++;
	}
	return (nb);
}

int			ft_atoi(const char *str)
{
	while (ft_isspace(*str))
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
		return (-1 * to_number(++str));
	return (to_number(str));
}
