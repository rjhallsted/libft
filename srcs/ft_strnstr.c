/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 10:16:40 by rhallste          #+#    #+#             */
/*   Updated: 2017/09/20 10:18:10 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		found;
	int		i;
	char	*loc;

	found = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (!found)
	{
		i = 0;
		while (*big && *big != little[0] && len-- > 0)
			big++;
		loc = (char *)big;
		if (*loc != '\0')
		{
			while (big[i] && little[i] && big[i] == little[i] && len - i > 0)
				i++;
			if (little[i] == '\0')
				found = 1;
		}
		else
			return (NULL);
	}
	return (loc);
}
