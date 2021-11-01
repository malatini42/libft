/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 23:07:24 by mahautlatin       #+#    #+#             */
/*   Updated: 2021/01/09 22:31:35 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Concatenate strings with the same input parameters and output result.
** Designed to be safer.
** LIBC FUNCTION.
*/

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t j;
	size_t dest_length;
	size_t source_length;

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
