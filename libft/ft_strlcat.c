/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 23:07:24 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/09/28 13:14:47 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

/*
** Concatenate strings with the same input parameters and output result.
** Designed to be safer.
** LIBC FUNCTION.
*/

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	j;
	size_t	dest_length;
	size_t	source_length;

	j = 0;
	dest_length = ft_strlen(dest);
	source_length = ft_strlen(src);
	if (dstsize <= dest_length)
		return (source_length + dstsize);
	while (src[j] && dstsize - 1 > dest_length + j)
	{
		dest[dest_length + j] = src[j];
		j++;
	}
	dest[dest_length + j] = '\0';
	return (dest_length + source_length);
}
