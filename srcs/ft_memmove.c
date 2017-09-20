/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 18:55:02 by rhallste          #+#    #+#             */
/*   Updated: 2017/09/19 19:27:03 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*dst_str;
	const char	*src_str;

	dst_str = dst;
	src_str = src;
	i = 0;
	while (i < len)
	{
		if ((dst + i) < src && (src + len) < (dst + i))
			dst_str[i] = src_str[i];
		i++;
	}
	return (dst);
}
