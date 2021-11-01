/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/05 19:37:45 by mahautlatin       #+#    #+#             */
/*   Updated: 2021/01/09 17:08:25 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Locates the first occurrence of c (converted to a char) in s.
** The terminating null character is considered to be part of the string.
** Therefore if c is `\0', the functions locate the terminating `\0'.
** LIBC FUNCTION.
*/

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = (int)ft_strlen((char *)s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
