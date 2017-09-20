/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 17:06:38 by rhallste          #+#    #+#             */
/*   Updated: 2017/09/19 17:07:03 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int len;
	int i;
	char *new;

	len = ft_strlen(s);
	new = ft_strnew(len + 1);
	i = 0;
	while (i < len)
	{
		new[i] = f(i, s[i]);
		i++;
	}
	return (new);
}
