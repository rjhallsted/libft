/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 16:21:10 by rhallste          #+#    #+#             */
/*   Updated: 2017/10/27 16:44:26 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Assumes the argument 'array' is NULL-terminated. Otherwise, behavior
** is undefined.
*/

#include <string.h>
#include <stdlib.h>

size_t	ft_arraylen(void *array)
{
	int i;

	i = 0;
	while (*(char *)(array + i))
		i++;
	return (i);
}
