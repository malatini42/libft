/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/05 19:37:45 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/03 15:16:12 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

/*
** Locates the first occurrence of c (converted to a char) in s.
** The terminating null character is considered to be part of the string.
** Therefore if c is `\0', the functions locate the terminating `\0'.
** LIBC FUNCTION.
*/
char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = (int)ft_strlen((char *)s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
