/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 22:29:00 by malatini          #+#    #+#             */
/*   Updated: 2021/01/10 08:28:05 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*cpy_src;
	unsigned char	*cpy_dst;

	i = 0;
	cpy_src = (unsigned char *)src;
	cpy_dst = (unsigned char *)dst;
	while (n > 0)
	{
		cpy_dst[i] = cpy_src[i];
		if (cpy_src[i] == (unsigned char)c)
			return (&cpy_dst[i + 1]);
		i++;
		n--;
	}
	return (NULL);
}
