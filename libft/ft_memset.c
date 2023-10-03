/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 23:11:04 by malatini          #+#    #+#             */
/*   Updated: 2023/10/03 15:37:56 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

void	*ft_memset(void *dest, int ch, size_t count)
{
	unsigned char	*bytes;

	bytes = (unsigned char *)dest;
	while (count)
		bytes[--count] = ch;
	return (dest);
}
