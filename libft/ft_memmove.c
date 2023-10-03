/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 23:09:44 by malatini          #+#    #+#             */
/*   Updated: 2023/09/28 13:14:10 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

/*
** Copies len bytes from string src to string dst.
** The two strings may overlap, the copy is done in a non-destructive manner.
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*s;
	char		*d;
	size_t		i;

	s = (const char *)src;
	d = (char *)dst;
	if (!d && !s)
		return (NULL);
	i = 0;
	if (d < s)
	{
		while (len--)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
		while (len--)
			d[len] = s[len];
	return ((void *)dst);
}
