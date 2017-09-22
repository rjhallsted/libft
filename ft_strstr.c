/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 09:43:44 by rhallste          #+#    #+#             */
/*   Updated: 2017/09/20 18:53:17 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int i;
	int j;

	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	j = 0;
	while (big[i])
	{
		while (big[i + j] && big[i + j] == little[j])
			j++;
		if (little[j] == '\0')
			return ((char *)(big + i));
		j = 0;
		i++;
	}
	return (NULL);
}
