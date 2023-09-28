/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 14:28:26 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/09/28 13:15:09 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

/*
** Allocates and returns an array of fresh strings.
** By spliting s using the character c as a delimiter.
** NON STANDARD FUNCTION.
*/

static int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

static char	*custo_strdrup(char const *s, char c)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	while (s[i] != c)
		i++;
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	j = 0;
	while (j < i)
	{
		str[j] = s[j];
		j++;
	}
	str[j] = '\0';
	return (str);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**strs;
	int		i;
	int		j;

	strs = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!strs)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c)
		{
			strs[j] = custo_strdrup(s + i, c);
			i++;
			j++;
		}
		while (s[i] != c && s[i])
			i++;
	}
	strs[j] = 0;
	return (strs);
}
