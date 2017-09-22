/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 17:00:22 by rhallste          #+#    #+#             */
/*   Updated: 2017/09/19 18:39:51 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		len;
	int		i;
	char	*new;

	len = ft_strlen(s);
	new = ft_strnew(len + 1);
	i = 0;
	while (i < len)
	{
		new[i] = f(s[i]);
		i++;
	}
	return (new);
}
