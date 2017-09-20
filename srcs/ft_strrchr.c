/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 09:33:18 by rhallste          #+#    #+#             */
/*   Updated: 2017/09/20 09:41:57 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *last;

	last = NULL;
	while (*s)
	{
		if (*s == c)
			last = (char *)s;
		s++;
	}
	if (*s == c)
		last = (char *)s;
	return (last);
}
