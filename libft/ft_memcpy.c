/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 16:22:15 by malatini          #+#    #+#             */
/*   Updated: 2023/09/28 13:14:05 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

/*
**	Copies n bytes from memory area src to memory area dst.
** If dst and src overlap, behavior is undefined.
*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!dst && !src)
		return (dst);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (n--)
		d[n] = s[n];
	return (dst);
}
