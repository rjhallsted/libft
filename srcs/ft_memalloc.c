/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 14:59:25 by rhallste          #+#    #+#             */
/*   Updated: 2017/09/19 16:33:44 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../libft.h"

void	*ft_memalloc(size_t size)
{
	void *new;

	if (!(new = malloc(size)))
		return (NULL);
	ft_memset(new, 0, size);
	return (new);
}
