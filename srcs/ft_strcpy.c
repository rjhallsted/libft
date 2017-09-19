/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 11:56:45 by rhallste          #+#    #+#             */
/*   Updated: 2017/09/19 12:00:42 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dst, char *src)
{
	char *dst_start;

	dst_start = dst;
	while (*src)
	{
		*dst = *src++;
		dst++;
	}
	*dst = '\0';
	return (dst_start);
}
