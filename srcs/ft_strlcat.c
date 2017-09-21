/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 09:10:54 by rhallste          #+#    #+#             */
/*   Updated: 2017/09/20 17:23:11 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*tmp;
	size_t	len;

	len = (size_t)ft_strlen(dst) + (size_t)ft_strlen(src);
	tmp = dst;
	while (*tmp && size > 1)
	{
		tmp++;
		size--;
	}
	while (*src && size > 1)
	{
		*tmp++ = *src++;
		size--;
	}
	*dst = '\0';
	return (len);
}
