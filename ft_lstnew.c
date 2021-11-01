/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 22:20:56 by malatini          #+#    #+#             */
/*   Updated: 2021/02/21 12:47:39 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates and return a new element
** The variable 'content' is initialized with the value of the 'content'.
** The variable 'next' is initialized to NULL.
*/

t_list	*ft_lstnew(void const *content)
{
	t_list *new;

	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	new->content = (void *)content;
	new->next = NULL;
	return (new);
}
