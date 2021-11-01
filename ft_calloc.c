/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 09:06:09 by malatini          #+#    #+#             */
/*   Updated: 2021/02/24 09:13:12 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void *memory;

	if (!(memory = (void *)malloc(sizeof(size) * count)))
		return (NULL);
	ft_bzero(memory, count * size);
	return (memory);
}
