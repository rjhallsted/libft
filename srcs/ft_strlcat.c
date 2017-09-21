/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 09:10:54 by rhallste          #+#    #+#             */
/*   Updated: 2017/09/21 12:26:09 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int len;
	int	n;

	n = (int)size;
	while (*dst && n > 0)
	{
		dst++;
		n--;
	}
	len = size - (size_t)n;
	if (*dst == '\0')
	{
		while (*src && n > 0)
		{
			*dst++ = *src++;
			n--;
		}
		if (*src == '\0')
			*dst = '\0';
		return ((size_t)len + ft_strlen(src));
	}
	else
		return (size + (size_t)ft_strlen(src));
}
