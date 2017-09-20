/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 19:38:12 by rhallste          #+#    #+#             */
/*   Updated: 2017/09/19 19:46:41 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*c1;
	const char	*c2;
	size_t		i;

	c1 = s1;
	c2 = s2;
	i = 0;
	while (i < n && c1[i] == c2[i])
		i++;
	return (c1[i - 1] - c2[i - 1]);
}
