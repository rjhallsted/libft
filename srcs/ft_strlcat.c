/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 09:10:54 by rhallste          #+#    #+#             */
/*   Updated: 2017/09/20 18:09:26 by rhallste         ###   ########.fr       */
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
	while (*tmp && size > 0)
	{
		tmp++;
		size--;
	}
	while (*src && size > 0)
	{
		*tmp++ = *src++;
		size--;
	}
	if (*src == '\0')
		*tmp = '\0';
	return (len);
}
