/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 09:10:54 by rhallste          #+#    #+#             */
/*   Updated: 2017/09/22 13:05:30 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int len;
	int	n;
	int s;

	n = (int)size;
	s = 0;
	while (*dst && n > 0)
	{
		dst++;
		n--;
	}
	len = size - (size_t)n;
	if (n != 0)
	{
		s = ft_strlen(src);
		while (*src && n > 1)
		{
			*dst++ = *src++;
			n--;
		}
		*dst = '\0';
		return ((size_t)(len + s));
	}
	else
		return (size + ft_strlen(src));
}
