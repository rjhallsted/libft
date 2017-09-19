/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 19:36:59 by rhallste          #+#    #+#             */
/*   Updated: 2017/09/18 20:40:06 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int ft_atoi(const char *str)
{
	int nb;

	nb = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
		return (-1 * ft_atoi(++str));
	while (ft_isdigit(*str))
	{
		nb = (nb * 10) + (*str - '0');
		str++;
	}
	return (nb);
}
