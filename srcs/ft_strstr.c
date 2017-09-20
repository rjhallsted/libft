/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 09:43:44 by rhallste          #+#    #+#             */
/*   Updated: 2017/09/20 10:04:30 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../libft.h"

char	*ft_strstr(const char *big, const char *little)
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
		while (*big && *big != little[0])
			big++;
		loc = (char *)big;
		if (*loc != '\0')
		{
			while (big[i] && little[i] && big[i] == little[i])
				i++;
			if (little[i] == '\0')
				found = 1;
		}
		else
			return (NULL);
	}
	return (loc);
}
